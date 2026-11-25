#include <iostream> 
 
using namespace std; 
template <typename A> 
void F(A a,A b){ 
A c=a; 
a=b; 
b=c; 
cout<<"a="<<a; 
cout<<"b="<<b; 
} 
int main() 
{ 
  int a,b; 
  cin>>a>>b; 
  F(a,b); 
  float n,m; 
  cin>>n>>m; 
  F(n,m); 
  char  w,v; 
  cin>>w>>v; 
  F(w,v); 
 
}

#include <iostream> 
 
using namespace std; 
template <class A> 
class Calculator { 
    private: 
        A a, b; 
    public: 
        Calculator(A x, A y) { 
            a = x; 
            b = y; 
        } 
        A qushish() { 
            return a + b; 
        } 
        A ayrish() { 
            return a - b; 
        } 
        A kopaytrish() { 
            return a * b; 
        } 
        A bulish() { 
            if (b != 0) { 
                return (double) a / b; 
            } else { 
                cout << "Xatolik: Nolga bo'lib bo'lmaydi!" << endl; 
                return 0.0; 
            } 
        } 
}; 
 
int main() { 
    Calculator <int>obj(10,5); 
 
    cout << obj.qushish() << endl; 
    cout << obj.ayrish() << endl; 
    cout << obj.kopaytrish() << endl; 
    cout << obj.bulish() << endl; 
    Calculator <float>obj1(10.5,1.5); 
 
    cout << obj1.qushish() << endl; 
    cout << obj1.ayrish() << endl; 
    cout << obj1.kopaytrish() << endl; 
    cout << obj1.bulish() << endl; 
 
    return 0; 
}