#include <iostream>
using namespace std;
/* konstruktor 2 xil bo'ladi parametrli(qo'shimcha) va parametrsiz(standart)

1) A(){}

2) A(int x,int y){}


3) destruktor
   ~A(){ ... }
konstruktorni  va destruktorni  tanasini ham class dan tashqarida yozishimiz mumkin bo'ladi funksiya bilan birga
*/

class A{ public:
string a;
int b;
float c;
 A(string x,int y,float z){
a=x;
b=y;
c=z;}
void print(){
cout<<a<<endl; 
cout<<b<<endl; 
cout<<c<<endl; 
}
}; 

/*
 konstruktor  orqali qiymat berish

1) A obj(12,"Hello");

2) A obj=A(12,"Hello");

*/

int main(){

A obj("Hojiyev",24,68.5);
obj.print();

A obj1("Baysinov",21,73.73);
obj.print();

A obj2("Amonov",21,55,74);
obj2.print();

return 0;} 