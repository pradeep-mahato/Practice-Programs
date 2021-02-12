//WAP to find maximum of 3 numbers

#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    if(b>c){
            cout<<b<<endl;
        }
    return 0;
}