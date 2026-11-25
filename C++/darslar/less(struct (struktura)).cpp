#include <iostream>
using namespace std;

struct A{
int a;
int b;
A(int x,int y){
a=x;
b=y;
}
void print(){
cout<<(a+b)<<endl; 
}
};

int main(){
 struct A  str=A(1,3); 
str.print();

return 0;} 