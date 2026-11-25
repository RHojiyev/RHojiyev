#include <list>
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{  list < int > ruyxat;
    list <int> ::iterator x;
    
    ruyxat.push_back(10);
    ruyxat.push_back(100);
    ruyxat.push_back(-125);
    ruyxat.push_front(7);    /// 7 10  100   -125   x
    
    
       
        
    cout<<" Ilk ro'yxat elementlari"<<endl;
    for ( x=ruyxat.begin(); x!=ruyxat.end(); x++)
      cout<<*x<<endl;
      
    x=min_element(ruyxat.begin(), ruyxat.end());
    cout<<" eng kichigi="<<*x<<endl;
    
     x=max_element(ruyxat.begin(), ruyxat.end());
    cout<<" eng kattasi="<<*x<<endl;
    
     x=find( ruyxat.begin(), ruyxat.end(), 7);
       
        
        if ( x==ruyxat.end())  cout<<" topilmadi";
        else
          cout<<" topildi";
      
  
    
    
}