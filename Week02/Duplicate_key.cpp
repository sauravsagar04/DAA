#include<iostream>
using namespace std;

int copies=0;

int Duplicates(int arr[],int m,int size,int key);

int bsearch(int arr[], int left,int right,int key)
{
   
    if(right >= left)
    {
        int m = left + (right - left)/2;
        if(arr[m] == key)
        {
            while(arr[m] == key)
            {
                if(m == -1)
                    break;
                m--;
            }
            return m+=1;
        }
        
        if(arr[m] > key)
            return bsearch(arr,left,m-1,key);
        else  
            return bsearch(arr,m+1,right,key);
    }
    else
        return -1;
    
}

int Duplicates(int arr[],int m,int size,int key)
{
    while(m <= size)
    {
        if(arr[m] == key)
            copies+=1;
        m++;
    }
    return copies;
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
        int result = bsearch(arr,0,n-1,key);
        
        if(result >= 0)
            cout<<arr[result]<<"-"<<Duplicates(arr,result,n-1,key)<<"\n";
        else
            cout<<"key Not Present "<<"\n";

        copies = 0;
    }
    return 0;
}
