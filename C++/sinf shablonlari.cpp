#include <iostream>
using namespace std;
template <class  K>
class Talaba
{ private:
   string ism;
   K yosh;
  public:
     Talaba ( string  i, K y)
     { ism=i;
      yosh=y; }
    string get_ism () { return ism;}
    K get_yosh () { return yosh;}  
};
  int main()
  { Talaba <int> obj1 (" Go'zal", 27 );
  cout<<obj1.get_yosh();
  cout<<obj1.get_ism();
  
 Talaba <string> obj2 (" Go'zal", " yigirma yetti" );
  cout<<obj2.get_yosh();
  cout<<obj2.get_ism();
  
  }