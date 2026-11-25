#include <iostream>
using namespace std;
int main(){
 int a,b;
A:
cin>>a>>b;
if(a<0&&b<0)
goto A;
else
 cout<<(a+b)<<endl;
return 0;
}