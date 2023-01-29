#include <stdio.h> 
int main()
{
float x,y,z; 
printf("Enter the numbers");
scanf("%f%f", &x, &y);
z=x;
x=y;
y=z;
printf(" Values after Swapping x is %f y is %f",x,y);
return 0;
}
