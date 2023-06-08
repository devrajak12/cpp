#include<iostream>
using namespace std;
int main()
{
    int i,f;
    for (i=1;i<=5;i++)
    {
        for ( f = 1; f <= i; f++)
        {
          cout<<f;
        }
        cout<<endl;
    }
    return 0;
}