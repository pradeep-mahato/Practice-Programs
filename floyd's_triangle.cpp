// inverted half pyramid using numbers - 2

#include<iostream>
using namespace std;

int main()
{
    int rows,i,j;
    cin>>rows;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<" "<<i++<<" " ;            
        }
        cout<<endl;
    }
    return 0;
}