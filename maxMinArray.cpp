#include<iostream>
using namespace std;

int main()
{
    int n,max=0,min;
    cout<<"Size of array ";
    cin>>n;
    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    min=array[0];
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        if(max<array[i])
        {
            max=array[i];
        }
        if(min>array[i])
        {
            min=array[i];
        }
    }
    cout<<endl<<"Max "<<max<<endl<<"Min "<<min<<endl;
    return 0;
}