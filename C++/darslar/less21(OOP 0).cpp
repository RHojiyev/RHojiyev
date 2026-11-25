/*
 abstraction 
yani koddan foydalanish uni qanday ishlashini bilosh  muhim bo'lmasligi
abstraction  hisoblanadi masalan cout<< ; chiqaradi uni qanday ishlashi bizga muhim emas
*/

#include <iostream>
using namespace std;
class B{
int b;
public:
int funk(){
return b*2;
}
};

int main(){
B  obj;
cout<<obj.funk()<<endl; 

return 0;} 