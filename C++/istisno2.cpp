#include <iostream>
using namespace std;
float Peremetr ( float a, float b, float c)
{ if (cin.fail())
     throw "Tip istisnosi";
     
  if ( a<0 or b<0 or c<0)
     throw  " manfiy son istisnosi";
  if (  !(a+b>c and b+c>a and a+c>b) )
    
  throw -1;
    return  a+b+c;
}

 int main()
 { float a, b,c,P;
 cin>>a>>b>>c;
 try {
   P=Peremetr (a,b,c);
   cout<<P;
 }
 
   catch ( ... )
   {  cout<<" xatolik bor qayerdadir";
   }
 }