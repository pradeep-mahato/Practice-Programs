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
    int n,r,ans;
    cin>>n>>r;
    ans = fact(n)/(fact(n-r)*fact(r));
    cout<<ans<<endl;

    return 0;
}