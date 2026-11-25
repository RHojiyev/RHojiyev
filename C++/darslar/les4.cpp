#include <iostream>
using namespace std;
template <typename tip>
tip progressiya(tip a1, tip an, tip n)
{
    return (a1+an)/2*n;
}



int main ()
{ cout<<" butun sonli progreassiyani kirit"<<endl;
     int a1, an,n;
     cin>>a1>>an>>n;
     cout<<progressiya(a1,an,n);

     cout<<" haqaiy sonli progreassiyani kirit"<<endl;
     float A1, An,N;
     cin>>A1>>An>>N;
     cout<<progressiya(A1,An,N);
}