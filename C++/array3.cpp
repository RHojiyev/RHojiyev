#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int A[] = { 11, 44, 33, 11, 22, 33, 11, 22, 44 };
    int B[] = { 11, 22, 44 };
    int* ptr;
    ptr = search(A, A + 9, B, B + 3);
    if(ptr == A + 9)
        cout << "Moslik mavjud emas\n";
    else
        cout << "Moslik bor. Indeks: " << (ptr- A) << endl;

return 0;
}