// WAP to convert temperature from F to C

#include<iostream>
using namespace std;

int main()
{
    float f;
    float c;
    cin >> f;
    c = (f-32)* 5 / 9 ;
    cout << c << endl;
    return 0;
}