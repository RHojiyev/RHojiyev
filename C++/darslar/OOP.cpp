#include <iostream>
#include <string>

using namespace std;
class Publishing {
protected:
    string nomi;
    int yili;
public:
    Publishing(string t, int y) {
        nomi = t;
        yili = y;
    }
     void display1() {
      cout << "Jurnal yoki  Kitob Nomi: " << nomi << endl;
      cout << "Nashir  yili: " << yili << endl;
  }
};

class Book : public Publishing {
private:
    string muallif;
public:
    Book(string t, int y, string a) : Publishing(t, y) {
        muallif = a;
    }
    void display2() {
       
        cout << "Muallif: " << muallif << endl<<endl;
        
    }
};

class Magazine : public Publishing {
private:
    int Raqami;
public:
    Magazine(string t, int y, int i) : Publishing(t, y) {
        Raqami = i;
    }
    void display3() {
        
        cout << "Nashr Raqami: " << Raqami << endl;
       
    }
};

int main() {
    Book obj("Farxod va shirin", 1988, "zzzzz");
    obj.display1();
    obj.display2();
    Magazine obj1("darakchi", 2021, 3);
    obj1.display1();
    obj1.display3();

    

    return 0;
}