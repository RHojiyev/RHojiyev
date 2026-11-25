#include <iostream>
#include <algorithm>
using namespace std;
class EKUB {
  private:
    int a, b;
    
  public:
    EKUB ( int x, int y)
    { if (x<=0  or y<=0)
      throw  x;
      a=x;
      b=y;
    }
  int get_ekub()   //  12    20
  { int e;
  for ( int i=1; i<=a; i++)
      if ( a%i==0 and b%i==0)
          e=i;
          return e; 
  }
    
};
int main()
{ int x, y;
 cout<<" ikkita sonni kiriting"<<endl;
 cin>>x>>y;
 try {
 EKUB  eee (x, y);
 cout<<eee.get_ekub();  }
 catch ( ... )
 { cerr<<"KON xatolik";
 }  }