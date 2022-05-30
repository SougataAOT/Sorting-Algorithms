#include<iostream>
using namespace std;

int pass=0;

void insertion_sort(int arr[], int n)
{
    int temp;
    for(int i=1; i<n; i++)
    {
        temp=arr[i];
        int j=i-1;
            
        while(j>=0 && temp<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
            pass++;
        }
        arr[j+1]=temp;
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
    int arr[]={9, 4, 3, 2, 34 ,1, 6};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"**Before Sorting**";
    traversal(arr, size);

    insertion_sort(arr, size);

    cout<<"\n\n**After Sorting**";
    traversal(arr, size);

    cout<<"\n\nTotal Passes : "<<pass;
}