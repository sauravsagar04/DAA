#include<iostream>
using namespace std;

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partitioning(int arr[], int l, int h, int &swaping, int &comp)
{
    
    int p = arr[h];
    int i = l-1;
    for(int j=l;j<=h-1;j++)
    {
        comp+=1;
        if(arr[j] < p)
        {
            i++;
            swap(&arr[i],&arr[j]);
            swaping+=1; 
            
        }
    }
    swap(&arr[i+1], &arr[h]);
    swaping+=1;
    return (i+1);
}

void qSort(int arr[], int l, int h, int &swaping, int &comp)
{
    if(l<h)
    {
        int piv;
        piv = partitioning(arr,l,h,swaping,comp);

        qSort(arr,l,piv-1,swaping,comp);
        qSort(arr,piv+1,h,swaping,comp);
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int comp=0;
        int swaping=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        qSort(arr,0,n-1,swaping,comp);
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<"\t";
        }
        cout<<"\nComparission -> "<<comp<<"\n";
        cout<<"Swaps -> "<<swaping<<"\n";

    }

    return 0;
}
