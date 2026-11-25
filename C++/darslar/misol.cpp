#include <iostream>
#include <string>
using namespace std;
int main(){
int x;
float y;

cout<<"x=";cin>>x;
cout<<"y=";cin>>y; 
cout<<(x+y)<<endl;
cout<<(x*y)<<endl;
cout<<(x-y)<<endl;
cout<<(x/y)<<endl;
cout<<(x%y)<<endl;

cout<<(x>y)<<endl; // true or false
cout<<(x==y)<<endl;
cout<<(x>=y)<<endl;
cout<<(x<=y)<<endl;
x++;
cout<<x<<endl; 

return 0;
} 