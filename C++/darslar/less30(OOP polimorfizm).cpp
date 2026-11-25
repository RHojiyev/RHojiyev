#include <iostream>
using namespace std;
//runtime polimorphism
class A{ 
public:
 void funk(){
cout<<"class A"<<endl; 
}
}; 

class B:public A{
public: 
void funk(){
cout<<"class B"<<endl; 
 }
};
class C:public B{
public: 
void funk(){
cout<<"class C"<<endl; 
 }
};


int main(){
A obj;
obj.funk(); // faqat o'zini metodi

B obj2;
obj2.funk(); // uzini metodi
obj2.A::funk(); // A sinfni metodi

C obj3;
obj3.funk(); // uzini metodi
obj3.A::funk(); // A ni metodi
obj3.B::funk(); // B ni metodi

return 0;} 