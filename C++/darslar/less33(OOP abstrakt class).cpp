#include <iostream>
using namespace std;

class A{ 
public:
 virtual void funk(){}=0;

/*abstrak class undan obyekt yaratib bo'lmaydi lekin metodini bo'lsa ishlatsa bo'ladi
*/
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
cout<<" class c"<<endl; 
}
};

int main(){
B obj;
C obj2;

obj.funk();
obj2.funk();

return 0;

}
