#include<iostream>
using namespace std;

int addf(int n1,int n2)
{
    int sum=n1+n2;
    return sum;
}

int main()
{
    int a,b;
    cin>>a,b;
    cout<<addf(a,b)<<endl;
    return 0;
}