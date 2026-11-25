#include <iostream>
using namespace std;

class A{ 
private:
int a,b;
public:
 void funk(){
cout<<"a="<<endl;cin>>a;
cout<<"b="<<endl;cin>>b; 
cout<<"S="<<a*b<<endl; 
cout<<2*(a+b)<<endl; 
}
cout<<""<<endl; 
}; 
int main(){
A obj;
obj.funk();

return 0;}
