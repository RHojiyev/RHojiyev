#include <iostream>
using namespace std;
float division(int x,int y){
if(y==0){
throw " 0 ga bo'lib bo'lmaydi";}
return (x/y);
}
int main(){
int a=5,b=0;
float r=0;
try{
r/division(a,b);
cout<<r<<endl; 
}
catch(const char* e){

cerr<<e<<endl;
}
return 0;} 