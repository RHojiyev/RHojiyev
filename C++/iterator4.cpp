#include<iostream>
#include<algorithm>
#include<list>
using namespace std;
int main(){
list<int> l;
list<int>::iterator x;
l.push_back(7);
l.push_back(8);
l.push_back(5);

cout<<"  elementlari: "<<endl;
for(x=l.begin(); x!=l.end(); x++)
cout<<*x<<endl;

x=min_element(l.begin(), l.end());
cout<<" kichik elementi "<<*x<<endl;

x=max_element(l.begin(), l.end());
cout<<" katta elementi "<<*x<<endl;

x=find(l.begin(), l.end(), 8);

if(x==l.end())
cout<<" topilmadi";

else
cout<<"topildi "<<*x;

l.sort(); 
cout<<"\n saralangan list ";
for(x=l.begin(); x!=l.end(); x++)
cout<<*x<<" ";

int count_8 = count(l.begin(), l.end(), 8);
cout<<"\n8 soni: "<<count_8;

l.reverse(); // ro'yxatni teskari tartibda joylashtirish
cout<<"\n Reverse qilingan ro'yxat: ";
for(x=l.begin(); x!=l.end(); x++)
cout<<*x<<" ";


return 0;
}