#include <iostream>
using namespace std;
// throw-istisnoni ushlash
// catch- istisni qabul qilish iostisno bayoni
// try-sinab ko'r;

int main()
{ float a,b,c;
try {
cin>>a>>b;
if (b==0)
    throw "Istisnoni ushladik";
  c=a/b;
  cout<<" javobi="<<c;
} 
catch (const char* x)
{ cout<<x; }  }