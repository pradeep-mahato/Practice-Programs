

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
            cout<<" "<<a++<<" " ;            
        }
        cout<<endl;
    }
    return 0;
}