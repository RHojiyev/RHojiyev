#include <iostream>
#include <string>
using namespace std;

class Animal{
protected:
string nom;
public:
void  funk(){
cout<<"..."<<endl; 
}

//konstruktor
Animal(string a){
nom=a;
}
};
class B:public Animal {
protected:
B(string a):Animal(a){}
};

int main(){
B obj("Hello");
cout<<obj.nome<<endl;

return 0;} 