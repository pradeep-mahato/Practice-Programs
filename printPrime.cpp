//WAP to print prime number

#include<iostream>
using namespace std;

int main()
{
    int n,num=2,div;
    cin>>n;
    while(num<=n)
    {
        div=2;
        while(div<num)
        {
            if(n%div==0)
            {
            num=num+1;
            }
            else
            {
                div=div+1;
            }
        }
        cout<<num<<endl;
        num=num+1;
    }
    
    return 0;
}