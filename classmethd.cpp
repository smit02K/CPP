#include<iostream>
using namespace std;

class MyClass {        // The class
  public:              // Access specifier
    void play();// Method/function declaration
    void study();
};

// Method/function definition outside the class
void MyClass::play() {
  cout << "TOM IS PLAYING";
}
void MyClass::study() {
  cout << "\nTOM IS DOING STUDY";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.play();  // Call the method
  myObj.study();
  return 0;
}
