
#include <stdio.h>
#include <math.h>
 
int main()
{
 float x,y;
 printf("ÇëÊäÈëxµÄÖµ£º\n");
 scanf("%f",&x);
 if (x<2)
 {
     y=x;
 }
 if (x>=2&&x<6)
 {
     y=pow(x,2)+1;
 }
 if (x>=6&&x<10)
 {
     y=sqrt(x+1);
 }
 if(x>=10)
 {
      y=1/(x+1);
 }
    printf("%f",y);
    return 0;
}

