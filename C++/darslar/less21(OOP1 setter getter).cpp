#include <iostream>
using namespace std;
class A{
 private:
string Name;
string Surname;
int Age;

void setName(string x){
Name=x;
}

string getName(){  return Name;}

void setSurname(string y){
Surname=y;
}
getSurname(){   return Surname;}

void setAge(int z){
Age=z;
}
getSurname(){   return Age;}

}; 

/*

class dan tashqarida funksiya tanasini yozish
void classname::funk(int x){
.....
}

*/

int main(){

 A obj=A(); // konstruktorga murojat
obj.setName("Rayimbek");
cout<<getName()<<endl; 

obj.setSurname("Hojiyev");
cout<<getSurname()<<endl; 

obj.setAge();
cout<<getAge()<<endl; 

return 0;} 

