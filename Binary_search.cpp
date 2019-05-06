#include <bits/stdc++.h>
using namespace std;
int Binary_Search(int arr[],int low,int high,int x)
{
    if(low<=high)
    {
        int mid = low + (high-low)/2;
        if(arr[mid]==x)
        {
            return mid;
        }
        else if(arr[mid]>x)
        {
            return Binary_Search(arr,low,mid-1,x);
        }
        else
        {
            return Binary_Search(arr,mid+1,high,x);
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int x;
    //element to be found
    cin>>x;
    cout<<Binary_Search(arr,0,n-1,x);
    return 0;
}
