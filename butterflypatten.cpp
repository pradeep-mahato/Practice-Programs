

#include<iostream>
using namespace std;

int main()
{
    int rows,i,j,a=1;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" * " ;            
        }
        for(j=1;j<=rows-i;j++)
        {
            cout<<"      ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<" * " ;            
        }
        cout<<endl;
    }
    for(i=rows;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" * " ;            
        }
        for(j=1;j<=rows-i;j++)
        {
            cout<<"      ";
        }
        for(j=1;j<=i;j++)
        {
            cout<<" * " ;            
        }
        cout<<endl;
    }
    return 0;
}