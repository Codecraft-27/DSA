#include<iostream>
using namespace std ;
int main ()
{
    int n, key ;

    cout<<"Enter the size number=";
    cin >>n;
    int arr[n];

        for (int i=0;i<n; i++)
        {
            cin >> arr[i];
        }

        cout<<"Enter the key number"<<" ";
        cin>>key ;
        int low =0, high =n-1, mid ;
        bool found =false;

        while(low <=high)
        {
            mid =low +(high-low)/2 ;

            if (arr[mid]==key)
            {
                cout<<"Found the key="<<mid<<endl;
                found =true;
                break ;
            

            }
            else if (arr[mid]<key)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;

            }


        }
        if(!found)
        {
            cout<<"Key not found";


        }
        return 0;







}