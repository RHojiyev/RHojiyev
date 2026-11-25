#include<iostream> 
using namespace std; 
 
class Number{ 
protected: 
    int a,b; 
    float c,d; 
    
public: 
    Number(int n,int m){ 
        a=n; 
        b=m; 
    } 
    Number(float n,float m){ 
        c=n; 
        d=m; 
    } 
        virtual void Number1() = 0; 
        virtual void Number2() = 0; 
        virtual void Number3() = 0; 
        virtual void Number4() = 0; 
}; 
 
class Integer: public Number{ 
public: 
    Integer(int n,int m):Number(n,m){ 
         
    } 
    virtual void Number1() { 
        cout<<"Integer a+b="<<a+b; 
    } 
         virtual void Number2() { 
        cout<<"Integer a-b="<<a-b; 
    } 
     virtual  void Number3() { 
        cout<<"Integer a*b="<<a*b; 
    } 
     virtual void  Number4() { 
        cout<<"Integer a/b="<<a/b; 
    } 
}; 
 
class Real: public Number{ 
public: 
    Real(float  n,float  m):Number(n,m){ 
         
    } 
   virtual void Number1() { 
        cout<<"Real c+d="<<c+d; 
    } 
         virtual void Number2() { 
        cout<<"Real c-d="<<c-d; 
    } 
     virtual void Number3() { 
        cout<<"Real c*d="<<c*d; 
    } 
     virtual void Number4() { 
        cout<<"Real c/d="<<c/d; 
    } 
}; 
 
int main(){ 
    Integer obj(2,3); 
    obj.Number1(); 
    obj.Number2(); 
    obj.Number3(); 
    obj.Number4(); 
  
   Real obj1(2.0,3.0); 
    obj1.Number1(); 
    obj1.Number2(); 
    obj1.Number3(); 
    obj1.Number4(); 
    return 0; 
}