#include<iostream>
using namespace std;

void traversal(int[], int);

int pass=0;

int get_max(int arr[], int n)
{
    int max=arr[0];
    for(int i=0; i<n; i++)
        if(max<arr[i])
            max=arr[i];
    
    return max;
}



void radix_sort(int arr[], int n)
{

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
    int arr[]={3, 1, 9, 7, 1, 2, 4};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"**Before Merging**";
    traversal(arr, size);

    radix_sort(arr, size);

    cout<<"\n\n**After Sorting**";
    traversal(arr, size);

    // cout<<"\n\nTotal Passes : "<<pass;
}
