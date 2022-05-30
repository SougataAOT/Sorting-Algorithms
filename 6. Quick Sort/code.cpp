#include<iostream>
using namespace std;

int pass=0;

int partition(int arr[], int low, int high)
{
    int i=low+1, j=high;
    int pivot=low;

    do
    {
        while(arr[i]<=arr[pivot])
            i++;
        while(arr[j]>arr[pivot])
            j--;
        if(i<j)
            swap(arr[i], arr[j]);
    }while(i<=j);

    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(int arr[], int low, int high)
{
    int index;
    if(low<high)
    {
        index=partition(arr, low, high);
        pass++;
        quick_sort(arr, low, index-1);
        quick_sort(arr, index+1, high);
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
    int arr[]={2, 4, 3, 9, 1, 4, 8, 7, 5, 6};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"**Before Sorting**";
    traversal(arr, size);

    quick_sort(arr, 0, size-1);

    cout<<"\n\n**After Sorting**";
    traversal(arr, size);

    cout<<"\n\nTotal Passes : "<<pass;
}