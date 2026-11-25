#include <iostream>
using namespace std;
class A{
public:
int z;
A(int a,b){
z=a+b;
}
~A(){cout<<"text"<<endl; }
void print(){

cout<<z<<endl; }
};

void Function(){
 A obj(1,3);
obj.print();
// obj.A(); destruktorni ishlatdim
}

int main(){
Function();

return 0;} 