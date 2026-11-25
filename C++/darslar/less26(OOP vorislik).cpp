#include <iostream>
using namespace std;
class A{ 
public:
float a=30; 
};

class B:public A{
public:
int b=25;
}

int main(){
/*
 voris class ota classni elementlarini oladi public da protectedda 
 */

B obj;
cout<<obj.a<<endl;  //30
cout<<obj.b<<endl;  //25

return 0;} 