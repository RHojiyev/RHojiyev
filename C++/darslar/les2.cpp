#include <iostream>
using namespace std;
template <typename T>
T yigindi( T a, T b)
{
     return a+b;
}
int main()
{ int a, b;
 cin>>a>>b;
 float k,l;
cin>>k>>l;
string m,n ;
cin>>m>>n;


     cout<<yigindi(a,b);
     cout<<yigindi(k,l);
     cout<<yigindi(m, n);
}