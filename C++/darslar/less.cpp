#include <iostream>
using namespace std;
class Bir {
  protected:
    int yosh;
    
  public:
     Bir ( int y)
     { if (y<=0)
       throw " bir kon xatolik";
       yosh=y;
     }

  };
  
  
  class ikki: public Bir
  {  private:
     int yil;
    public:
      ikki ( int y, int yil): Bir (y)
      { if (!( yil>0 or y<2023))
       throw " bunday yil yuq ikki kon xatolik";
       this->yil=yil;
      }
    
     
  };
  
  int main()
  {  try {
    ikki a (14, 2078); }
catch ( const char * l)
{ cout<<l;
}
  }