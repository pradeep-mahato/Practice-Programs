//half pyramid

#include<iostream>
using namespace std;

int main()
{
    int rows, cols, i,j;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" * ";            
        }
        cout<<endl;
    }
    return 0;
}