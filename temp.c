#include <stdio.h>

int main()
{
   float c,f,k;
   printf("Enter the temp. in celsius\n");
   scanf("%f",&c);
   f=(c*1.8)+32;
   printf("The temp. in fahrenhiet is %f\n",f);
   k=273.15+c;
   printf("The temp. in kevin is %f\n",k);
}
