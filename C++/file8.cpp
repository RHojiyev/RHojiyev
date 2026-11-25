#include <iostream>
#include <algorithm>
#include <array>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {33,22,33,44,33,55,66,77};
    int n=count(arr,arr+8,33);
    cout<<n<<endl;

    array <int, 8> arr1{33,22,33,44,33,55,66,77};
    int n1=count(arr1.begin(),arr1.end(),33);
    cout<<n1<<endl;


    vector <int> A{1,2,3,4,5,6,7,8,1,1,4,4,4};
    n1 = count(A.begin(), A.end(), 1);
    cout<<"Umumiy soni: "<<n1<<endl;

}