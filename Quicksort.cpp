#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partition(int arr[],int low,int high)
{
    int pivot=arr[low];
    int i=low+1;
    int j=high;

    while(i<=j)
    {
        while(i<=high && arr[i]<=pivot)
            i++;

        while(arr[j]>pivot)
            j--;

        if(i<j)
           

        swap(&arr[i],&arr[j]);
    }

    swap(&arr[low],&arr[j]);
    return j;
}

void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int p=partition(arr,low,high);
        quicksort(arr,low,p-1);
        quicksort(arr,p+1,high);
    }
}

int main()
{
    int arr[]={15,44,23,34,50,20};
    int n=6;

    quicksort(arr,0,n-1);

    cout<<"Sorted array: ";

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

    return 0;
}
