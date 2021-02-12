#include<iostream>
#include<math.h>
using namespace std;

void fibf(int num)
{
    int t1,t2,nxt,i;
    t1=0;
    t2=1;
    
    for(i=1;i<=num;i++)
    {
        cout<<t1<<endl;
        nxt=t1+t2;
        t1=t2;
        t2=nxt;
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    
    fibf(n);

    return 0;
}