//diamond pattern

#include<iostream>
using namespace std;

int main()
{
    int rows,i,j,k;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=i;j<=rows;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*i)-1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(i=1;i<=rows;i++)
    {
        for(j=rows;j>=rows-i+1;j--)
        {
            cout<<" ";
        }
        for(j=1;j<=(2*rows)-(2*i)+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}