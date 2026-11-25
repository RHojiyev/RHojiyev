#include <iostream>
using namespace std;

class A{ 
public:
string a;

/* konstruktor class obyektni yaratganda ishga tushadi */

A(string x){
a=x;
cout<<"konstrutor ishlayapti"<<endl; 
}

//destruktor
~A(){
cout<<"destruktor ishlayapti"<<endl; 
 }
// destruktor obyektni o'chiradi
}; 
int main(){
A obj("Hojiyev");
//A obj=A("Hojiyev"); konstruktor 

return 0;} 