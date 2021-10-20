#include<stdio.h>
main()
{
int a,b;
printf("enter 2 numbers for swapping: \n");
scanf("%d %d", &a,&b);
printf("numbers before swapping ,a=%d and b=%d \n", a,b);
a=a+b;
b=a-b;
a=a-b;
printf("numbers after swapping, a=%d and b=%d", a,b);
return 0;
}
