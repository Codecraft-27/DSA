#include<iostream>
using namespace std ;

int ternarysearch(int arr[],int left,int right,int key)
{
    while (left<=right)
    {
       int  mid1=left+(right-left)/3;
       int  mid2=right-(right-left)/3;

        if(key==arr[mid1])
        {
            return mid1;
        }
        if (key==arr[mid2])
        {
            return mid2;
        }
        if(key<arr[mid1])
        {
            right=mid1-1;
        }
        else if (key>arr[mid2])
        {
            left=mid2+1;
        }
        else
        {
            left=mid1+1;
            right=mid2-1;

        }

    }
    return -1;
    
}
int main ()
{
    int arr[100];
    
    int n=8;
    int key;
    cout<<"Enter the number="<<" ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nEnter number=";
    cin>>key;
    
   
    int result =ternarysearch(arr,0,n-1, key);
    if(result!=-1)
    {
        cout<<" key is ="<<key<<"\n ";
        cout<<" Found index ="<<result;
        

    }
    else
    {
        cout<<"Not found index";

    }
    return 0;


}