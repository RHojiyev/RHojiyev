#include <iostream>
using namespace std;
int main(){
int a[10][10]; // ustun, satr
for(int i=0;i<=9;i++)
  for(int j=0;j<=9;j++){
cin>>a[i][j] ;
}for(int i=0;i<=9;i++)
  for(int j=0;j<=9;j++)
cout<<a[i][j];
return 0;
}