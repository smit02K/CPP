#include <iostream>
using namespace std;

int main()
{
	int a=11,b=22,c=33,largest;
	
	cout<< "----program to check Largest number among three number----"<<endl;
	cout<< "numbers are \na="<<a<<"\nb="<<b<<"\nc="<<c;
	
	largest = a > b ? ( a > c ? a : c) : (b > c ? b : c) ;
	
	cout<< "\nLargest number among three number is : "<<largest;
	
	return 0;
	
}
