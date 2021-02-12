//WAP to find a number is prime or not

#include<iostream>
using namespace std;

int main()
{
    int n,div=2;
    cin>>n;
    while(div<n)
    {
        if(n%div==0)
        {
            cout<<"Non-Prime";
            return 0;
        }
        else{
            div=div+1;
            }
    }
    cout<<"Prime";
    return 0;
}