#include<iostream>
using namespace std;
int main()
{
 int a,i;
 cout<<"series of odd number:"<<endl;
 for(i=1;i<=100;i++)
 {
    if(i%2!=0)
    cout<<i<<" ";
 }
 cout<<endl<<"series of even number:"<<endl;
 for(i=1;i<=100;i++)
 {
    if(i%2==0)
    cout<<i<<" ";
 }
}