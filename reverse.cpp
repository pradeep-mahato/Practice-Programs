#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,reverse=0,i;
    cin>>n;
    
    while(n>0)
    {
        reverse = reverse*10 + n%10;
        n=n/10;
    }
    cout<<reverse;
    return 0;
}