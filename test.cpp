
#include<stdio.h>
int main()
{
   
    int a=5, b=10;
    int c;
    ++a;
    b++;
    c = a++;
  
  printf("%d  %d  %d", c, b, a);
  return 0;
}
