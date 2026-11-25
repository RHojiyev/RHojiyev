#include <iostream>
#include <algorithm> 
using namespace std;

int main()
{
    int A[] = { 2, 3, 4, 6, 8 };
    int B[] = { 1, 3, 5 };
    int C[8];
    merge(A, A + 5, B, B + 3, C);
   // merge()
    for(int j = 0; j < 8; j++) 
    cout << C[j] << ' ';
    cout << endl;
    return 0;
}