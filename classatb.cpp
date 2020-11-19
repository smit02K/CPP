#include<iostream>
using namespace std;

class Laptop {
	public:
    string ram;
    string Memory_Size;
    string brand;
};

int main() {
  // Create an object of Laptop
  Laptop laptopObj1;
  laptopObj1.brand = "DELL";
  laptopObj1.ram = "8GB";
  laptopObj1.Memory_Size = "500GB";

  // Create another object of Laptop
  Laptop laptopObj2;
  laptopObj2.brand = "HP";
  laptopObj2.ram = "16GB";
  laptopObj2.Memory_Size = "1000GB";

  // Print attribute values
  cout << laptopObj1.brand << " " << laptopObj1.ram << " " << laptopObj1.Memory_Size << "\n";
  cout << laptopObj2.brand << " " << laptopObj2.ram << " " << laptopObj2.Memory_Size << "\n";
  return 0;
}

