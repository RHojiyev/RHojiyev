#include <iostream>
#include <fstream>
using namespace std;
int main(){

/* ofstream f;//faylni yozish u-n ochish
ifstream g;//faylni o'qish u-n ochish
f.close();//fayl yopildi
g.close();//fayl yopildi */
ofstream f;
f.open("output.txt");
ifstream g;
g.open("input.txt");
return 0;
}