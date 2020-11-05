#include <iostream>
using namespace std;

int main()
{
    int a = 11, b = 99;
    //int temp;
    
    cout<< "----program to swap number----"<<endl;

    cout << "\nBefore swapping value is" << endl;
    cout << "a = " << a << " \nb = " << b << endl;

 //   temp = a;
 // a = b;
 //b = temp;
  
  a=a+b;
  b=a-b;
  a=a-b;

    cout << "\nAfter swapping value is" << endl;
    cout << "a = " << a << " \nb = " << b << endl;

    return 0;
}
