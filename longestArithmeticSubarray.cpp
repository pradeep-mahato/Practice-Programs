#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    int pd=array[1]-array[0];
    int j=2;
    int curr =2; 
    int ans=2;

    while(j<n)
    {
        if(pd==(array[j]-array[j-1]))
        {
            curr++;
        }
        else
        {
            pd=array[j]-array[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;
    return 0;
}