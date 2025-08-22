#include <stdio.h>
int main()
{
 int a,b;
 printf("\n enter two numbers:");
 scanf("%d %d",&a,&b);

 if (a > b)
 {
 printf("largest = %d, smallest = %d\n",a,b);
 printf("\n largest value is a");
 }
 else
 {
 printf("largest = %d, smallest = %d\n",b,a);
 printf("\n largest value is b");
 }
 return 0;
}
