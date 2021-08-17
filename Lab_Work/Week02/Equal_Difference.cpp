#include<iostream>
using namespace std;

int Check(int arr[],int size, int key)
{
    int count=0;
    for(int i = size; i >= 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            int temp =( arr[i] > arr[j])? arr[i]-arr[j]:arr[j]-arr[i];
    
            if (temp == key)
            {    
                count+=1;
            }
        }
    }
    return count;

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
            cin>>arr[i];

        int key;
        cin>>key;

        cout<<Check(arr,n-1,key);

    }
}