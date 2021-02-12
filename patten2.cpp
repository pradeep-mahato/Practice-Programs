//hollow rectangel star patten

#include<iostream>
using namespace std;

int main()
{
    int rows, cols, i,j;
    cin>>rows>>cols;
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=cols;j++)
        {
            if(i==1 || i==rows)
            {
                cout<<" * ";
            }
            else if(j==1 || j==cols)
            {
                cout<<" * ";
            }
            else if(j>1&& j<cols)
            {
                cout<<"   ";
            }
            
            
        }
        cout<<endl;
    }
    return 0;
}