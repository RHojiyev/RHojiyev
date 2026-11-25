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
//funk() abstrak holatda bor
void funk1(){
cout<<"funk1"<<endl; 
 }
};

class C:publi B{
 public:
/* funk() va funk1() funksiyalar abstrakt holada klass ichida turibdi */
 void funk2(){
cout<< 
"funk2"<<endl; 
}
}; 

int main(){
A obj;
obj.funk(); // faqat o'zini metodi

B obj2;
obj2.funk(); // ajdodini metodi
obj2.funk1(); // uzini metodi

C obj3;
obj3.funk();  // ajdodini metodi
obj3.funk1(); // ajdodini metodi
obj3.funk2(); // o'zini metodi

return 0;} 