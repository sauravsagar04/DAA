#include<iostream>
using namespace std;


void merge(int arr[], int l, int mid, int h, int &comp, int &inversion)
{
    int lsize = mid-l+1;
    int hsize = h-mid;
    int larr[lsize], harr[hsize];

    for(int i=0;i<lsize;i++)
        larr[i] = arr[l+i];
    for(int j=0;j<hsize;j++)
        harr[j] = arr[mid+1+j];

    int i=0,j=0,k=l;
    while(i<lsize && j<hsize)
    {
        if(larr[i] < harr[j])
        {
            arr[k++] = larr[i++];
            comp+=1;
        }    
        else
        {
            arr[k++] = harr[j++];
            comp+=1;
            inversion+=lsize-i;
        }
            
    }


    for(;i<lsize;i++)
        arr[k++] = larr[i];
    for(;j<hsize;j++)
        arr[k++] = harr[j];

}

void mergeSort(int arr[], int l, int h,int &comp, int &inversion)
{
    if(l<h)
    {
        int mid = l+(h-l)/2;
        mergeSort(arr,l,mid,comp,inversion);
        mergeSort(arr,mid+1,h,comp,inversion);
        merge(arr,l,mid,h,comp,inversion);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size;
        cin>>size;
        int arr[size];
        int comp=0;
        int inversion=0;
        for(int i=0;i<size;i++)
            cin>>arr[i];
        mergeSort(arr,0,size-1,comp,inversion);
        for(int i=0;i<size;i++)
            cout<<arr[i]<<"  ";
        cout<<"\nInversion -> "<<inversion<<"\n";
        cout<<"Comparision -> "<<comp<<"\n";
    }
    return 0;
}