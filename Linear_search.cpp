#include <bits/stdc++.h>
using namespace std;
int Linear_Search(int arr[],int n,int x)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        return i;
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
    cout<<Linear_Search(arr,n,x);
    return 0;
}
