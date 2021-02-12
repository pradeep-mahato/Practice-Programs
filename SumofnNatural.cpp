//WAP to find sum of n natural numbers

#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    cin>>n;
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
    return 0;
}