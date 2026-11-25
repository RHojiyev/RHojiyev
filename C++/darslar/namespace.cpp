#include <iostream>
 using namespace std;

namespace  A{
void Funk(){
cout<<"text"<<endl; 
}

}

namespace  B{
void Funk(){
cout<<" text "<<endl; 
}

}

using namespace A;

int main(){

funk();

return 0;
}