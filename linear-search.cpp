#include <iostream>
using namespace std;
int main()
{
    int arr[10],element,size,i=0,flag;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"Enter array members"<<endl;
    while(i<size)
    {
        cin>>arr[i]; 
        i++;
    }
    cout<<"Enter element to search: ";
    cin>>element;
    for(i=0;i<10;i++)
    {
        if (arr[i]==element)
        {
            cout<<"Element found at index "<<i<<endl;
            flag=0;
        }
    }
    if(flag!=0)
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}