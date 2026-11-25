#include <iostream>
#include <fstream>

using namespace std;

int main() {
   ifstream file;

   try {
      file.open("example.txt");
      if (!file.is_open()) {
         throw runtime_error("Error opening file!");
      }
      // Fayl operatsiyalari
      file.close();
   } catch (const exception& e) {
      cerr << e.what() << endl;
      return 1;
   }

   return 0;
}