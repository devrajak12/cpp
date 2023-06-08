#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the number";
    cin>>a;
    b=a;
    c=a;
    for (int i = 1; i<a; i++)
    {
        c=c*i;
    }
    cout<<"factorial of "<<b<<"="<<c;
    
}