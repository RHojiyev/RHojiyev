#include <iostream>
using namespace std;
class Cal{
public:
static int add(int a,int b){
return a+b;
}
static int add(int a,int b,int c){
return a+b+c;
};
int main(){
Cal obj;
cout<<obj.add(1,2)<<endl; 
cout<<obj.add(1,2,3)<<endl; 

return 0;} 