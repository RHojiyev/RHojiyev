#include <iostream>
#include <string>
using namespace std;

class Mashina{
 public:
string brand;
string model;
int yili;

};

int main(){

mashina obj;

string  a=obj.brand="Chevrolet";
string  b=obj.model="Tracker";
int c=obj.yili=2021;

mashina ob2;
string  x=obj2.brand="BMW";
string  y=obj2.model="X5";
int z=obj2.yili=2020;

cout<<a<<b<<c<<endl; 
cout<<x<<y<<z<<endl; 



return 0;} 