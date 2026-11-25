#include <iostream>
using namespace std;
int main(){
 int n,m,*x;
n=123;
x=&n;
cout<<x<<endl;
m=*x;
cout<<m<<endl;
return 0;
}