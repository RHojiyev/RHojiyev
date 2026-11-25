#include <iostream>
using namespace std;

class A{ 
public:
string name;
string surname;
int age;

// method
void func(){
cout<<name<<endl; 
cout<<surname<<endl; 
cout<<age<<endl; 
}
// konstruktor
A(string x, string y,int z){
 name=x;
 surname=y;
 age=z;
}
}; 

int main(){
 
A obj=A("Hojiyev","Rayim",23);

/* 
obj("A","B",45); ko'rishidan ham foydalansa bo'ladi */

obj.func();

return 0;
} 