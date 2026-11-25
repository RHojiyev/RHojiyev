#include <iostream>
using namespace std;

class A{ 
public:
 void funk(){
cout<<"funk"<<endl; 
}
}; 

class B:public A{
public: 
void funk1(){
cout<<"funk1"<<endl; 
 }
};

int main(){
A obj;
obj.funk(); // faqat o'zini metodi

B obj2;
obj2.funk(); // ajdodini metodi
obj2.funk1(); // uzini metodi

return 0;} 