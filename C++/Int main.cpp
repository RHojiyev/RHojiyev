#include <iostream>
using namespace std;

//global o'zgaruvchi 
int varb;

string funk(string x){
return x;
}
int main(){
string  a,b;
cin>>a;
cin>>b;
cout<<funk(a)<<" "<<funk(b)<<endl;
cout<<funk(a)+funk(b);
cout<<a<<""<<endl; 

return 0;}