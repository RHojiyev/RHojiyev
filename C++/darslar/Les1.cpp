#include <iostream>
#include <string>
using namespace std;
class Sinf1
{
 public:
   virtual  void print()
    {
         cout<<" sinf1 ni metodi"<<endl;
    }
};
class Sinf2:public Sinf1
{
 public:
     virtual void print()
    {
         cout<<" sinf2 ni metodi"<<endl;
    }
};
class Sinf3:public Sinf2
{
 public:
     virtual void print()
    {
         cout<<" sinf3 ni metodi"<<endl;
    }
};

int main()
{    Sinf1 bir;
    Sinf2 ikki;
    Sinf3 uch;


    uch.print();  /// 3 niki
    uch.Sinf2::print();  ///2  niki
    uch. Sinf1:: print();   /// 1 niki

     ikki. print();  /// 2 niki
     ikki. Sinf1::print();  /// 1 niki;
     Sinf2 &p=uch;
     p.print();     /// 3 niki


     bir.print();   /// 1 niki;
     Sinf1 *a=&ikki;
     a->print();   /// 2 niki;
     Sinf1 &m=uch;
     m.print();  /// 3 niki;

}