#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partitioning(int arr[], int l, int h)
{
    
    int p = arr[h];
    int i = l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j] < p)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1], &arr[h]);
    return (i+1);
}

void  qSort(int arr[], int l, int h,int key)
{

    if(l<h)
    {
        int piv;
        piv = partitioning(arr,l,h);

        if(piv == key)
            cout<<arr[piv];
        else if(key < piv)
            qSort(arr,l,piv-1,key);
        else
            qSort(arr,piv+1,h,key);
    }

}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int k;
        cin>>k;
        qSort(arr,0,n-1,k-1);
        
    }

    return 0;
}
