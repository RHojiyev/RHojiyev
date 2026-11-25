#include <iostream> 
using namespace std; 
 
class Currency { 
protected: 
    double amount; 
public: 
    Currency(double a = 0) { 
        amount = a; 
    } 
    virtual void convertToRubles() = 0; 
    virtual void convertToDollars() = 0; 
    virtual void convertToEuros() = 0; 
    virtual void printAmount() = 0; 
}; 
 
class Ruble : public Currency { 
public: 
    Ruble(double a = 0) : Currency(a) {} 
    void convertToRubles() { 
       cout << "Allaqachon dollarda" << amount << endl; 
    } 
    void convertToDollars() { 
        cout << " Dollarda: " << amount/70 << endl; 
    } 
    void convertToEuros() { 
        cout << " Yevroda: " << amount/80 << endl; 
    } 
    void printAmount() { 
        cout << amount << " Rubl " << endl; 
    } 
}; 
 
class Dollar : public Currency { 
public: 
    Dollar(double a = 0) : Currency(a) {} 
    void convertToRubles() { 
        cout << " Rublda: " << amount*70 << endl; 
    } 
    void convertToDollars() { 
        cout << " Allaqachon dollarda: " << amount << endl; 
    } 
    void convertToEuros() { 
        cout << " Yevrida: " << amount*0.85 << endl; 
    } 
    void printAmount() { 
        cout << amount << " Dollar" << endl; 
    } 
}; 
 
class Euro : public Currency { 
public: 
    Euro(double a = 0) : Currency(a) {} 
    void convertToRubles() { 
        cout << " Rublda: " << amount*80 << endl; 
    } 
    void convertToDollars() { 
        cout << " Dollrda: " << amount/0.85 << endl; 
    } 
    void convertToEuros() { 
        cout << " Allaqachon yevroda: " << amount << endl; 
    } 
    void printAmount() { 
        cout << amount << "  yevro" << endl; 
    } 
}; 
 
int main() { 
  
 
    Ruble r(1000); 
       Currency *c = &r; 
    c->printAmount(); 
    c->convertToDollars(); 
    c->convertToEuros(); 
        r.printAmount(); 
        r.convertToDollars(); 
        r.convertToEuros(); 
 
    Dollar d(50); 
    c = &d; 
    c->printAmount(); 
    c->convertToRubles(); 
    c->convertToEuros(); 
     d.printAmount(); 
        d.convertToDollars(); 
        d.convertToEuros(); 
 
    Euro e(20); 
    c = &e; 
    c->printAmount(); 
    c->convertToRubles(); 
    c->convertToDollars(); 
        e.printAmount(); 
        e.convertToDollars(); 
        e.convertToEuros(); 
 
    return 0; 
}