#include<iostream>
#include<math.h>
using namespace std;

int fact(int num)
{
    int factorial=1,i;
    for(i=2;i<=num;i++)
    {
        factorial*=i;
    }
    return factorial;
}

int main()
{
    int n,ans,j,i;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            ans = fact(i)/(fact(j)*fact(i-j));
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}