#include<iostream>
using namespace std;

void Linear_search(int arr[], int size, int key)
{
    int comp = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == key)
        {
            comp = (i+1);
            break;
        }
    }

    if(comp >= 1)
        cout<<"Present "<<comp<<"\n";
    else
        cout<<"Not Present "<<size<<"\n";
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
        for(int i = 0; i < size; i++)
        {
            cin>>arr[i];
        }
        int key;
        cin>>key;
        Linear_search(arr,size,key);
    }
    return 0;
}
