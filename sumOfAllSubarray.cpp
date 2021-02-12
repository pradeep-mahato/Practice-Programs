#include<iostream>
using namespace std;

int main()
{
    int n,i,j,sum=0;
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                sum+=array[j];
                cout<<sum<<endl;
            }
            sum=0;
        }
    return 0;
}