#include <iostream>
#include <queue>
using namespace std;

class Talaba
{ private:
   queue <string> ism;
   queue <int> yosh;
   
   public:
      Talaba ( queue<string> i,  queue<int> y)
      { ism=i;
        yosh=y;}
        
     string  get_birinchi ()
     {  return ism.front();}
     
     string get_oxirgi ()
     {  return ism.back();}
     
     void print()
     { cout<<" JAMI TALABALAR"<<endl;
     int x=ism.size(); 
      for ( int i=0;  i<x; i++)
      { cout<<ism.front() <<"  "<<yosh.front()<<endl;  
      ism.pop();  yosh.pop();  }
  }
};
int main()
{ int n;
cout<<" Talabalar sonini kiriting=";  cin>>n;
queue <int> yosh;
queue <string> ism;
string k; int y;
cout<<" ismini   va yoshini kirit"<<endl;


  for ( int i=1; i<=n; i++)
    {   cin>>k;
        ism.push(k);
        cin>>y;
       yosh.push(y);
  }
  
  Talaba  talabalar (ism, yosh);
  
  cout<<" birinchi navbatdagi talaba ="<<talabalar.get_birinchi()<<endl;
  cout<<" oxirgi navbatdagi talaba ="<<talabalar.get_oxirgi()<<endl;
  talabalar.print();
}