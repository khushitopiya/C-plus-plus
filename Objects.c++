#include <iostream>
#include <string>
using namespace std;

    class MyClass 
      
   { public:           
    int myNum;        
    string myString; }; 
    

int main() 
{
    MyClass myObj; 

    myObj.myNum = 31;
    myObj.myString = "Hello, I'm Khushi Topiya";

    cout << myObj.myNum << "\n"; 
    cout << myObj.myString; 
    
  return 0;
}
