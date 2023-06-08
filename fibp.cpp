#include<iostream>
using namespace std;
int main()
{
 int a,b,c;
 a=0;
 b=1;
 cout<<"fibonacci series:-";
 cout<<a<<" "<<b<<" ";
 for(int i=0;i<=10;i++)
 {
 c=a+b;
 cout<<c<<" ";
 a=b;
 b=c;
 }
}