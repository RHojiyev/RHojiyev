#include <iostream>
using namespace std;

class A{
 public:
void funk(){
cout<<"A"<<endl; 
}
};
class B{
 public:
void funk2(){
cout<<"B"<<endl; }

};

class C:public A,public B{
 public:

/* C class  A dan ham B dan ham voris olgan holda turibdi 
va unda A da va B dagi xossalar abstrak holatda turadi 
*/

void funk3(){
cout<<"C"<<endl; }

};
int main(){

C obj;
obj.funk();
obj.funk2();
obj.funk3();


return 0;} 