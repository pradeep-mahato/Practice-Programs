//solid rhombus pattern

#include<iostream>
using namespace std;

int main()
{
    int rows,i,j,a=1;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows-i;j++)
        {
            cout<<" ";
        }
        for(j=1;j<=5;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}