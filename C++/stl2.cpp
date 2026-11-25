#include <iostream>
#include <list>
using namespace std;
/* STL Standard Template  Library */
/*

Algoritmlar
Konteynerlar
Funksiyalar 
Iteratorlar

*/

int main(){
list <int> a;
list <int>::iterator b;
for(int i=2;i<=7;i++){ 
a.push_back(i);
}
b=a.begin();
++b;

a.insert(b,15);
a.insert(b,2,20);

--b;
for(b=a.begin();b!=a.end();++b){
cout<<*b<<endl;
  } 

return 0;
} 