#include<iostream>
using namespace std;
int main()
{
    int n,extrac,max;
    cout<<"Size of array ";
    cin>>n;
    int array[n];
    string result[n];
    cout<<"Array candies per kid ";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    cout<<"Array output ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl<<"Extra candies ";
    cin>>extrac;
    int maxNo=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]>maxNo)
        {
            maxNo=array[i];
        }
    }
    cout<<"Max "<<maxNo<<endl;
    cout<<"Array output ";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    for(int i=0;i<n;i++)
    {
        if((array[i]+extrac)>=max)
        {
            result[i]="true";
        }
        else
        {
            result[i]="false";
        }
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}