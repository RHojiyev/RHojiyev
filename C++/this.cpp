#include <iostream>
using namespace std;
class Cow{
public:
void p() const{
cout<<const<<endl; 
}
};

void main(){

Cow b;
cout<<&b<<endl; 
b.p();

Cow g;
cout<<&g<<endl; 
g.p();

Cow* x=new Cow;
cout<<x<<endl; 
x->p();
delete  x;

} 