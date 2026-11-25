#include <iostream>
using namespace std;
class Smartphone{
public:
virtual void funk()=0;
};
class Android:public Smartphone{
public:
void funk(){
cout<<"text"<<endl; 
}
};
class Iphone:public Smartphone{
public:
void funk(){
cout<<"text"<<endl; 
}
};

int main(){
Smartphone* s1=new Android();
s1->funk();

Smartphone* s1=new Iphone();
s1->funk();

return 0;} 