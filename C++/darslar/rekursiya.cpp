#include <iostream>
using namespace std;

int factorial(int);

int main() {
    int n, natija;

    cout << "raqamni kiriting:";
    cin >> n;

/* funksiya qiymatini o'zgaruvchiga tenglashtiramiz */

    natija = factorial(n);

    cout << n <<"factorial "<< natija<<" ga teng"<<endl;
    return 0;
}

int factorial(int n) {
    if (n > 1) {
        return n * factorial(n - 1);
    } else {
        return 1;
    }
}