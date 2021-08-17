#include<iostream>
using namespace std;

void InsertionSort(int arr[],int size)
{
    int i,temp,j;
    int comp = 0;
    for(i = 0; i < size; i++)
    {
        temp = arr[i];
        j=i-1;
        
        while(arr[j]>temp && j>=0)
        {
            arr[j+1] = arr[j];
            j=j-1;
            comp+=1;
        }
        arr[j+1] = temp;
    }
    for(int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    cout<<"comparisions = "<<comp<<"\n";
    cout<<"Swift = "<<comp+size-1<<"\n";  

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
        InsertionSort(arr,n);
    }
    return 0;
}
