#include <stdio.h>


int main()
{  int r,c,i,j,a[100][100],b[100][100],sub1[100][100],sub2[100][100],sum1=0,sum2=0;
    printf("Enter the no of rows:");
    scanf("%d",&r);
    printf("Enter the no of column:");
    scanf("%d",&c);
    
    printf("Enter the elements of first matrix\n");
    
    for(i=0;i<r;++i)
    for(j=0;j<c;++j)
    {
        printf("Enter the element a%d%d:",i+1,j+1);
        scanf("%d",&a[i][j]);
        
    }
    printf("Enter the elements of second matrix\n");
    
    for(i=0;i<r;++i)
    for(j=0;j<c;++j)
    {
        printf("Enter the element b%d%d:",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    
    for(i=0;i<r;++i)                              //A-B
    for(j=0;j<c;++j)
    {
        sub1[i][j]=a[i][j] - b[i][j];
    }
    for(i=0;i<r;++i)                             //B-A
    for(j=0;j<c;++j)
    {
        sub2[i][j]=b[i][j] - a[i][j];
    }
    
    for(i=0;i<r;++i)                             //sum(A-B)
    for(j=0;j<c;++j)
    {
        sum1=sum1 + sub1[i][j];
    }
    for(i=0;i<r;++i)                            //sum(B-A)
    for(j=0;j<c;++j)
    {
        sum2=sum2 + sub2[i][j];
    }
    
    if(sum1>sum2){
        printf("Greater");
    }
    else{
        printf("Less");
    }
    


    return 0;
}
    
