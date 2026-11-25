#include <iostream>
#include <bits/stdc++>
using namespace std;
class A{ 

private:
  string Ism;
  string Familiya;
  int Yosh;
 int Ogirligi;

public:
 void setIsm(string x){
 Ism=x;}

  string getIsm(){return Ism;}
void setFamiliya(string y){
 Familiya=y;
 }

  string getFamiliya(){return Familiya;}

void setYosh(string z){
 Yosh=z;}
  string getYosh(){return Yosh;}

 };

void setOgirligi(string q){
 Ogirligi=q;}
  string getYosh(){return Ogirligi;}
 };


 int main(){ 
A obj1;
obj1.setIsm();
cout<<obj1.getIsm()<<endl;
obj1.setFamiliya();
cout<<obj1.getFamiliya()<<endl;
obj1.setYosh();
cout<<obj1.getYosh()<<endl;

obj1.setOgirligi();
cout<<obj1.getOgirligi()<<endl;
return 0;
}