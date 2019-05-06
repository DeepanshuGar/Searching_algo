#include <bits/stdc++.h>
using namespace std;
int Ternary_Search(int arr[],int low,int high,int x)
{
    if(low<=high)
    {
        int mid1 = low + (high-low)/3;
        int mid2 = mid1 + (high-low)/3;
        if(arr[mid1]==x)
        {
            return mid1;
        }
        else if(arr[mid2]==x)
        {
            return mid2;
        }
        else if(arr[mid1]>x)
        {
            return Ternary_Search(arr,low,mid1-1,x);
        }
        else if(arr[mid2]<x)
        {
            return Ternary_Search(arr, mid2+1, high, x); 
        }
        return Ternary_Search(arr,mid1+1,mid2-1,x);
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
    cout<<Ternary_Search(arr,0,n-1,x);
    return 0;
}
