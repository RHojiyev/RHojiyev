#include <iostream>
using namespace std;

class A{ 
public:
string a;
int b;
float c;

static int funk(int x,int y){

return x+y;
}

static int funk(int x,int y,int z){

return x+y+z;
}



int main(){

A obj;

/*

 kiritgan parametrimizga qarab funksiyani topib oladi 

*/

cout<<obj.funk(6,8)<<endl; 
cout<<obj.funk(35,76,86)<<endl; 

return 0;} class