//rectangel star patten

#include<iostream>
using namespace std;

int main()
{
    int rows, cols, i,j;
    cin>>rows>>cols;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}