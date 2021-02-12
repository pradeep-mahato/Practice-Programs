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
    int n;
    cin>>n;
    int ans =fact(n);
    cout<<ans<<endl;

    return 0;
}