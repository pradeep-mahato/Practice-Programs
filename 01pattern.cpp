//rhombus pattern

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
            if((i+j)%2==0){
                cout<<" 1 ";
            }
            else
            {
                cout<<" 0 ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}