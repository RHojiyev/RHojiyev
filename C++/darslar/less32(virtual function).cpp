#include <iostream>
using namespace std;
//runtime polimorphism
class A{ 
public:
virtual void funk(){
cout<<"class A"<<endl; 
}
}; 

class B:public A{
public: 
void funk(){
cout<<"class B"<<endl; 
 }
};
int main(){
A *obj;
B obj2;

obj=&obj2;
obj->funk();
// B classni metodi ishlaydi 
}