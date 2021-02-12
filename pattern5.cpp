//half pyramid after 180 degree rotation

#include<iostream>
using namespace std;

int main()
{
    int rows,i,j;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            j<=rows-i ? cout<<"   " : cout<<" * ";               
        }
        cout<<endl;
    }
    return 0;
}