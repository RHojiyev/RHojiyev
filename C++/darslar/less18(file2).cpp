#include <iostream>
#include <fstream>
using namespace std;
int main(){
int n,int a[90];
cout<<"n="<<endl; cin>>n; 
cout<<massiv elemnetni kriting<<endl;
for(int i=0;i<n;i++)
cin>>a[i]; 
ofstream f;
f.open("toq.txt");
ofstream g;
g.open("juft.txt");
for(int i=0;i<n;i++)
if(a[i]%2==1)
  f<a[i];
  f.close();
  g.close();
return  0;
 }  

return 0;} 