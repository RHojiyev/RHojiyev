#include <iostream>
using namespace std;
template <typename tip>
void almashtir ( tip A, tip B)
{
     tip  C=A;
          A=B;
          B=C;
          cout<<" almashgan qiymatlar="<<A<<"  "<<B<<endl;
}
int main()
{
     cout<<" Qanday turdagi qiymatlarni almashtirmoqchisiz ?"<<endl;
     cout<<"  1 int "<<endl;
      cout<<"  2 float "<<endl;
       cout<<"  3 string "<<endl;
        cout<<"  4 char  "<<endl;
         cout<<"  5 bool "<<endl;
int n;
l: cin>>n;
switch(n)
{
    case 1: { int a, b; cin>>a>>b; almashtir(a,b); break;}   ///55   butun ham haqiqiy
    case 2: { float a, b; cin>>a>>b; almashtir(a,b); break;}
    case 3: { string a, b; cin>>a>>b; almashtir(a,b); break;}
    case 4: { char a, b; cin>>a>>b; almashtir(a,b); break;}
    case 5: { bool a, b; cin>>a>>b; almashtir(a,b); break;}
    default:  { cout<<" 1 dan 5 gacha kirit ="; goto l; }
}
}