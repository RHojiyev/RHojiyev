#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector <int> A{1,2,3,4,5,6,7,8,9,10};
    vector <int> B{1,2,3};
    vector <int>::iterator b;
    b=search(A.begin(),A.end(),B.begin(),B.end());
    if(b == A.end())
        cout << "Moslik mavjud emas\n";
    else
        cout << "Moslik bor. Indeks: " << b-A.begin() << endl;

return 0;
}