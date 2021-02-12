#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Size of array ";
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
        sum+=array[i];
    }
    cout<<endl<<sum;
    return 0;
}