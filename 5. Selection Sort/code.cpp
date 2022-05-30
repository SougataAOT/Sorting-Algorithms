#include<iostream>
using namespace std;

int pass=0;

void selection_sort(int arr[], int n)
{
    int min, flag;
    for(int i=0; i<n; i++)
    {
        min=i;
        flag=0;
        for(int j=i+1; j<n; j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
                pass++;
                flag=1;
            }
        }
        if(min!=i)
            swap(arr[i], arr[min]);
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

    selection_sort(arr, size);

    cout<<"\n\n**After Sorting**";
    traversal(arr, size);

    cout<<"\n\nTotal Passes : "<<pass;
}