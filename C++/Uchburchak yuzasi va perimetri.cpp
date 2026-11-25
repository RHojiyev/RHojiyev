#include <iostream>
#include <math.h>
using namespace std;
int main(){
//Uchburchak perimetri,yuzasi,ichki va tashqi chizilgan aylana radiusi 
 float a,b,c,P,p,S,r,R;
cout<<"a=";cin>>a;
cout<<"b=";cin>>b;
cout<<"c=";cin>>c;
P=a+b+c;// Perimetr
p=(a+b+c)/2; //Yarimperimetr

if((a+b>c)&&(abs(a-b)<c)&&((a+c)>b)&&(abs(a-c)<b)&&((b+c)>a)&&(abs(b-c)<a)){
S=sqrt(p*(p-a)*(p-b)*(p-c));
r=(2*S)/P;
R=(a*b*c)/4*S;
cout<<"Perimetri "<<"P="<<P<<endl;
cout<<"Yuzasi "<<"S="<<S<<endl;
cout<<"R="<<R<<endl;
cout<<"r="<<r<<endl;
}
else{
cout<<"bunday tomonlari bor uchburchakni yasab bo'lmaydi";}
return 0;}