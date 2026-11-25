#include <list>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{  list < int > ruyxat;
    list <int> ::iterator x;
    
    ruyxat.push_back(10);
    ruyxat.push_back(1000);
    ruyxat.push_back(-125);
    ruyxat.push_front(-70);    //  -70,  10,  1000,  -125,    begin=-70,  end=  oxiridan keyingi nazariy element
    
    cout<<" Ilk ro'yxat elementlari"<<endl;
    for ( x=ruyxat.begin(); x!=ruyxat.end(); x++)
      cout<<*x<<endl;
    
    
    ruyxat.insert( ruyxat.begin(),555);
     ruyxat.insert( ruyxat.end (), 444);
    
    
    //  555,  -70,  10,  1000,  -125,  444 
    cout<<" qushilgandan keyin ro'yxat elementlari"<<endl;
    for ( x=ruyxat.begin(); x!=ruyxat.end(); x++)
      cout<<*x<<endl;
      int c=0;
   for ( x=ruyxat.begin(); x!=ruyxat.end(); x++)   
     { c++;
     if  (c==4)  { ruyxat.insert(x, 6666); }  }
     
     
     cout<<" urtaga qushilgandan keyin ro'yxat elementlari"<<endl;
    for ( x=ruyxat.begin(); x!=ruyxat.end(); x++)
      cout<<*x<<endl;
    
     
     
   }