#include <iostream>
using namespace std;
int funk(int y){
 if((n>0)&&(n<0))
  return funk(y-1)*y;
else
  return -1;
}
int main(){
int n;
cout<<"n=";cin>>n;
for(int i=2;i<=n;i+2){
 cout<<i;
}
int k;
cout<<"n=";cin>>k;
for(int i=6;i<=k;i+6){
 cout<<i;
}
cout<<funk(n);

return 0;}
//cin>>a>>b;
// const a=16;