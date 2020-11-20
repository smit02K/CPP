#include <iostream>
using namespace std;

int main()
{
	int num;
	
	cout<< "----program to check number is even or odd----"<<endl;
	cout<< "\nenter number to check number is even or odd : ";
	cin>>num;
	
	if(num%2==0)
	{
		cout<< num << " is even number";
	}
	else
	{
		cout<< num << " is odd number";
	}
	
	return 0;
}
