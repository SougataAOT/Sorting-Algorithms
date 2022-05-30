#include<iostream>
using namespace std;

int pass=0;

void bubble_sort(int arr[], int n)
{
    int flag;
    for(int i=0; i<n-1; i++)
    {
        flag=0;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {    
                swap(arr[j], arr[j+1]);
                flag=1;
            }
        }
        pass++;
        if(flag==0) 
            break;
    }
}   

void traversal(int arr[], int n)
{
    cout<<"\nTraversal--\n";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<", ";
}



int main()
{
    system("cls");
    int arr[]={13, 24, 5, 19, 2, 17, 4};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"**Before Sorting**";
    traversal(arr, size);

    bubble_sort(arr, size);

    cout<<"\n\n**After Sorting**";
    traversal(arr, size);

    cout<<"\n\nTotal Passes : "<<pass;
}