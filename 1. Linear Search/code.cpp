#include<iostream>
using namespace std;

void Lsearch(int arr[], int n)
{
    int data, pos;
    cout<<"Enter the data to search : ";
    cin>>data;

    for(int i=0; i<n; i++)
    {
        pos=1;
        if(arr[i]==data)
        {
            cout<<data<<" was found in "<<pos+i<<"th position..!"<<endl;
        }
    }
    if(pos==0)
        cout<<"\nElement was not found...!";
}


int main()
{
    system("cls");
    int arr[]={55, 22, 33, 11, 44};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    Lsearch(arr, size);
}