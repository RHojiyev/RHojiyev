class Base {
public:
  virtual void print() {
    cout << "This is a base class" << endl;
  }
};

class Derived : public Base {
public:
  void print() {
    cout << "This is a derived class" << endl;
  }
};Base *bptr;
Derived d;
bptr = &d;
bptr->print();

