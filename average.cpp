#include<iostream>
using namespace std;
int main()
{
    int n,i,temp,sum=0,average;
    cout<<"enter the n number:"<<endl;
    cin>>n;
    cout<<"enter the number till "<<n<<endl;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        sum+=temp;
    }
    average=sum/n;
    cout<<n<<average;
    return 0;
}