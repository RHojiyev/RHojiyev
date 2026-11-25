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
class C:public A{
public: 
void funk(){
cout<<"class C"<<endl; 
 }
};
int main(){
A *obj0;

A obj;
B obj3;
C obj4;

obj0=&obj;
obj0->funk();

obj0=&obj3;
obj0->funk();

obj0=&obj4;
obj0->funk();

return 0;
}
