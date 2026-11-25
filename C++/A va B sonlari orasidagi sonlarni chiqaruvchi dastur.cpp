#include <iostream>
#include <math.h>
using namespace std;
int main(){
float A,B;
int j;
cin>>A;
cin>>B;
if(A<B){
j=abs(B-A);
for(int i=0;i<j;i++){
 cout<<A+i<<endl;
 }
 }
else
 cout<<"xato son kiritdingiz"<<endl;
return 0;
}