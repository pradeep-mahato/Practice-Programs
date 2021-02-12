#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    long a,n,arm=0,ld;
    cin>>a;
    n=a;
    while(n>0)
    {
        ld = n%10;
        arm+=pow(ld,3);
        n=n/10;
    }
    if(a==arm)
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Not Aemstrong Number";
    }
    return 0;
}