#include<iostream>
using namespace std;

int pass=0;

void merge(int arr[], int lb, int mid, int ub)
{
    int i=lb, j=mid+1, k=lb;
    int uparr[ub+1];

    while(i<=mid && j<=ub)
    {
        if(arr[i]<arr[j])
        {   
           uparr[k]=arr[i];
           i++;
           k++;
        }
        else
        {   
           uparr[k]=arr[j];
           j++;
           k++;
        }
    }
    while(i<=mid)
    {
        uparr[k]=arr[i];
        i++;
        k++;
    }
    while(j<=ub)
    {
        uparr[k]=arr[j];
        i++;
        j++;
    }

    for(int i=lb; i<=ub; i++)
        arr[i]=uparr[i];
}

void merge_sort(int arr[], int lb, int ub)
{
    int mid;
    if(lb<ub)
    {
        mid=(lb+ub)/2;
        pass++;
        merge_sort(arr, lb, mid);
        merge_sort(arr, mid+1, ub);
        merge(arr, lb, mid, ub);
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
    int arr[]={9, 1, 4, 14, 15, 6};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"**Before Merging**";
    traversal(arr, size);

    merge_sort(arr, 0, size-1);

    cout<<"\n\n**After Sorting**";
    traversal(arr, size);

    cout<<"\n\nTotal Passes : "<<pass;
}