#include<iostream>
using namespace std;

int Bsearch(int arr[], int data, int low, int high)
{
    int mid;
    mid=(low+high)/2;
    
    if(arr[mid]==data)
        return mid;
    
    if(low>high)
        return -1;

    else if(arr[mid]>data)
        return Bsearch(arr, data, low, mid-1);

    else if(arr[mid]<data)
        return Bsearch(arr, data, mid+1, high);
    
}



int main()
{
    system("cls");
    int arr[]={11, 22, 33, 44, 55};
    int size=sizeof(arr)/sizeof(arr[0]);
    int pos=0, data;

    cout<<"Enter the data to search : ";
    cin>>data;
    
    pos=Bsearch(arr, data, 0, size-1);  

    if(pos==-1)
        cout<<"\nElement "<<data<<" was not found...!";
    else
        cout<<endl<<data<<" was found in "<<pos+1<<"th position...!";
}