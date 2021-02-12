#include<iostream>
using namespace std;

int sum(int num)
{
    int i,sum=0;
    for(i=1;i<=num;i++)
    {
        sum=sum+i;
    }
    return sum;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<sum(n)<<endl;

    return 0;
}