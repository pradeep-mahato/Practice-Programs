//palindromic pattern

#include<iostream>
using namespace std;

int main()
{
    int rows,i,j,k;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        k=i;
        for(j=1;j<=(rows-i);j++)
        {
            cout<<"  ";
        }
        for(;j<=rows;j++)
        {
            cout<<k<<" ";
            k--;
        }
        k=1;
        for(;j<(rows+i);j++)
        {
            k++;
            cout<<k<<" ";
        }
        for(;j<=(2*rows-1);j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}