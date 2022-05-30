#include<iostream>
using namespace std;

void traversal(int[], int);

int pass=0;

int get_max(int arr[], int n)
{
    int largest=arr[0];
    for(int i=0; i<n; i++)
        if(largest<arr[i])
            largest=arr[i];
    
    return largest;
}

void count_sort(int arr[], int n)
{
    int large=get_max(arr, n);
    large+=1;
    int count[large];
    int k=0;

    for(int i=0; i<large; i++)
        count[i]=0;

    for(int i=0; i<n; i++)
    {
        count[arr[i]]++;
    }

    cout<<"\n\nThe Count arr -- ";
    traversal(count, large);

    for(int j=0; j<large; j++)
    {
        while(count[j]!=0)
        {
            arr[k]=j;
            k++;
            count[j]--;
        }
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
    int arr[]={3, 1, 9, 7, 1, 2, 4};
    int size=sizeof(arr)/sizeof(arr[0]);

    cout<<"**Before Merging**";
    traversal(arr, size);

    count_sort(arr, size);

    cout<<"\n\n**After Sorting**";
    traversal(arr, size);

    // cout<<"\n\nTotal Passes : "<<pass;
}