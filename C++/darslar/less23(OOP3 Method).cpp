#include <iostream>
using namespace std;
 
class A{ 
public:
string a;
int b;
float c;
void kiritish(string x,int y,float z){
a=x;
b=y;
c=z;
}

void display(){
cout<<a<<endl; 
cout<<b<<endl; 
cout<<c<<endl; 
}

 A(){

}

}; 


int main(){
string x;
int y;
float z;
cin>>x; 
cin>>y; 
cin>>z; 
A  obj; // A classdan obj obyekt

/*obj u-n kiritish() display() metodlari ishlatildi */

obj.kiritish("Hojiyev",24,54.82);
obj.display();

A  obj1; 
/*
 A classdan yangi obj1 obyekt

obj1 u-n kiritish() display() metodlari ishlatildi 
*/
obj.kiritish("Urinov",50,100.53);
obj.display();

A  obj2;
// A classdan obj3 obyekt yaratdim

/*obj2 u-n kiritish() display() metodlari ishlatildi */

obj.kiritish("Shomurodov",14,19.94);
obj.display();


return 0;} 