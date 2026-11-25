#include <iostream>
using namespace std;

/* 
 
funksiyani  2 xil ko'rinishi bor qiymat qaytaradigan va qiymat qaytarmaydigan

1) string funcName(){ kod return qiymat;
}

2) void  funcName(){ kod }

endi parametrliklarini ko'ramiz

1) int funk( int x,int y){ 
int z=x+y;
return z;}

2) void funk(float x, string y){
float z=x;
string d=y;
cout<<z<<""<<d<<endl; 
}


flaot a=funk(3,5); funksiya qiymatini
biror o'zgaruvchiga tenglab qo'yishimiz mumkin
/*


void funk(){
cout<<"Hello"<<endl;
  }

int funk1( int x,int y){
if(x>y)
 return x+y;
else return x-y;
}


int main(){
int a,b;
cin>>a>>b;
cout<<funk1(a,b);
 /* kiritgan a va b ni yuboradi */
return 0;
} 