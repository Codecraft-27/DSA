        #include<iostream>
        using namespace std;

void merge (int arr[],int temp[], int left, int mid ,int right)
    {
        int i=left;
        int j=mid+1;
        int k=left;

        while (i<=mid && j<=right)
        {
            if(arr[i]<=arr[j])
            {
                temp[k++]=arr[i++];

            }
            else 
            {
                temp[k++]=arr[j++];
            }
        }
        while(i<=mid)
        {
            temp[k++]=arr[i++];
        }
        while (j<=right)
        {
            temp[k++]=arr[j++];
        }

        for(i=left;i<=right; i++)
        {
            arr[i]=temp[i];

        }
    }
void  mergesort(int arr[],int temp[],int left, int right)
    {
            if(left<right)
        {
            int mid = left + (right-left) /2;
            mergesort(arr,temp,left,mid);

            mergesort(arr,temp,mid+1,right);

            merge (arr,temp,left,mid,right);
        }
    }
int main ()
    {
        int n;
        cout<<"Enter the number=";
        cin >>n;
        int arr[100];
        int temp[100];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        mergesort(arr,temp,0,n-1);
        cout <<"Sorted array=";
        for(int i=0; i<n; i++ )
        {
            cout<<arr[i]<<" ";
        }

        return 0;


    }
