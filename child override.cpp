#include <iostream>
using namespace std;
class BaseClass {
public:
   void disp(){
      cout<<"Function of Parent Class"<<endl;
   }};
class DerivedClass: public BaseClass{
public:
   void disp() {
      cout<<"Function of Child Class"<<endl;
   }
};
int main() {
   BaseClass obj = DerivedClass(); 
   obj.disp();
   cout<<"Name:Rida Shehzad"<<endl;
   cout<<"RollNo:030"<<endl;
   return 0;
}

