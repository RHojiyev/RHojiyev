#include <iostream>
#include <string>
using namespace std;
//global  o'zgaruvchi
int a=36;
class A{
 public: //protected, private
string a;
string b;
int c;
static int count;

void func(string x,string y, int z){
a=x;
b=y;
c=z;
} 
void display(){
cout<<a<<b<<c<<endl;
 }
A(string x,string y,int z){

}

/* klass tashqaridan turib class elementiga murojat
*/

int Student::count=0;

}; 
int main(){

A obj();
obj.funk("Hojiyev","Rayimbek",2000);
obj.display()
cout<<count<<endl; 

return 0;
}