#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; 
    cin>>n;

    int a[n+1];
    a[n]=-1;

    for(int i=0;i<n;i++)
    {
        cin>> a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<< a[i]<<" ";
    }
    cout<<endl;

    if(n==1)
    {
        cout<<"1"<<endl;
        return 0;
    }

    int ans=0;
    int mx=-1;

    for(int j=0;j<n;j++)
    {
        if(a[j]>mx && a[j]>a[j+1])
        {
            ans++;
        }
        mx= max(mx,a[j]);
    }

    cout<<ans<<endl;

    
    return 0;
}