
#include <iostream>
#include <vector>
using namespace std;
template <class  K>
class   Kitoblar
{  public:
   vector <string> nom;
   vector <K > id;
   vector <int> narx;

  int get_urtacha ()
  { int s=0;
    for( int i=0; i<narx.size(); i++)
       s=s+narx[i];
       return s/narx.size();
  }
  void qimmatlari ()
  { int k=0, u=get_urtacha();
     cout<<" qimmat kitob nomi va idlari"<<endl;
    for( int i=0; i<narx.size(); i++)
    if (u<narx[i]) { k++; cout<<"nomi="<<nom[i]<<" id="<<id[i]<<endl;}

  cout<<"urtcha narx="<<u<<" Qimmat kitoblar soni="<<k<<endl;  }
  } ;
   int main()
   { Kitoblar <string> ramanlar;
   ramanlar.nom={" Xamsa"," O'tgan kunlar", " Kecha va kunduz "};
   ramanlar.id={" no id", " zzzzzzzzzz", " 123456789"};
   ramanlar.narx={ 17000, 15000,25000};
   ramanlar.qimmatlari();

   Kitoblar <int> hikoyalar;
   hikoyalar.nom={" Xxxx"," yyyyy", " oooooo "};
  hikoyalar.id={123, 5678, 125};
   hikoyalar.narx={ 16000, 15000,25000};
   hikoyalar.qimmatlari();


    }