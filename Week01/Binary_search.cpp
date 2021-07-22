#include<iostream>
using namespace std;
int count=0;
int  Binary_search(int arr[], int left,int right,int key)
{

    
    if(right >= left)
    {
        count+=1;
        int m = left + (right - left)/2;
        if(arr[m] == key)
         return arr[m];
        
        if(arr[m] > key)
            return Binary_search(arr,left,m-1,key);
        else  
            return Binary_search(arr,m+1,right,key);
    }
    else
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
        int key;
        cin>>key;
        int result = Binary_search(arr,0,n-1,key);
     
        if(result > 0)
            cout<<"present "<<count<<"\n";
        else
            cout<<"Not Present "<<count<<"\n";

            count = 0;
    }
    return 0;
}
