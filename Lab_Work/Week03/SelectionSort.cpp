
#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int size)
{
    int min,comp=0,swp=0; 
    for(int i = 0; i < size-1; i++)
    {
        min = i;
        for(int j  = i+1; j < size; j++)
        {
            comp+=1;
            if(arr[j] < arr[min])
                min = j;
        }
        if(min != i)
        {
            swap(arr[min],arr[i]);
            swp+=1;
        }
                   

    }
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<"\ncomparisions = "<<comp<<"\n";
    cout<<"Swaps = "<<swp<<"\n";
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
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        SelectionSort(arr,n);
    }
    return 0;
}