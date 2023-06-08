#include <iostream>
using namespace std;
 
int main()
{
    // Array Declared
    int arr[] = { 1, 2, 3, 4, 5 };
 
    // Referencing array with pointer
    int* ptr = arr;
    int a=12;
    int *p;
    *p= &a;
 
    // Using dereferencing to print
    // elements of array
    cout << "Elements of array:";
    for (int i = 0; i < 5; i++) {
        cout << (ptr + i) << " ";
    }
    cout << endl;
    cout<<*p;
 
    return 0;
}
