#include <stdio.h>

int main()
{
     int r,c,i,j,x,y,a[100][100];
    printf("Enter the no of rows:");
    scanf("%d",&r);
    printf("Enter the no of column:");
    scanf("%d",&c);
    
    printf("Enter the elements of the matrix\n");
    
    for(i=0;i<r;++i)
    for(j=0;j<c;++j)
    {
        printf("Enter the element a%d%d:",i+1,j+1);
        scanf("%d",&a[i][j]);
        
    }
   
    
