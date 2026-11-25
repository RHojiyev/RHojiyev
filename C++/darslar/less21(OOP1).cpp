#include <iostream>
using namespace std;

class ClassName{
public:
string Name;
string Company;
int age;

void func(){          // method
cout<<Name<<endl;
cout<<Company<<endl;
cout<<age<<endl;
}
};

int main(){

ClassName obj;
 //ClassName obj,obj2(23,"×@","$$")
string a=obj.Name="Rayimbek";
string b=obj.Company="Tesla";
int c=obj.age=25;
obj.func();

ClassName obj2;
obj2.Name="Jasur";
obj2.Company="BMW";
obj2.age=20;
obj2.func();

return 0;} 
