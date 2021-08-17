#include<iostream>
using namespace std;

int Find(int arr[],int key, int size,int k);

void Check(int arr[],int size)
{
    int count=0;
    for(int i = size; i >= 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            int temp = arr[i] - arr[j];
            int r = Find(arr,temp,size+1,j);
            if (r != -1)
            {    
                cout<<j+1<<"\t"<<r+1<<"\t"<<i+1<<"\n\n";
                break;
            }
            count+=1;
        }
    }
    if(count == ((size+1)*(size))/2)
        cout<<"No Sequence Found"<<"\n\n";
}

int Find(int arr[],int key,int size,int k)
{
    for(int i = 0; i < size; i++)
    {
    
        if(i==k)
            continue;

        if(arr[i] == key)
            return i;

    }
    return -1;
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
        {
            cin>>arr[i];
        }

        Check(arr,n-1);
    }
    return 0;
}