#include <graphics.h>
#include <stdlib>
using namespace std;
int main(){
initwindow(500,500);
setbkcolor(black);
setcolor(white);
circle(200,200,150);
putpixel(200,200,15);
system("PAUSE");
closegraph();
return EXIT_SUCCESS;


/* setcolor(rang nomi yoki kodi);
 setbkcolor();  
 putpixel(x,y,rang kodi);
 getpixel(x,y);
 line(x1,y1,x2,y2);
 circle(x,y,r);
 rectangle(x1,y1,x2,y2);
 lineto(x,y);
 lineral(x,y);
 drawpoly(n,p);
*/

return 0;} 