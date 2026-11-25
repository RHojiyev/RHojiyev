#include <iostream>
using namespace std;

class A{ public:
string a;
int b;
float c;
 A(string a,int b,float c){

/* agar o'zgaruvchi bir-biriga teng bo'lib qolsa xatolik ro'y beradi shuning uchun this pointeri ishlatiladi
*/

this->a=a;
this->b=b;
this->c=b;
}
void print(){
cout<<a<<endl; 
cout<<b<<endl; 
cout<<c<<endl; 
}
}; 

// konstruktor  orqali qiymat berish

int main(){

A obj("Hojiyev",24,68.5);
obj.print();

A obj1("Baysinov",21,73.73);
obj.print();

A obj2("Amonov",21,55,74);
obj2.print();

return 0;} 