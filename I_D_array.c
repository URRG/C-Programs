#include <stdio.h>

int main()
{
    int a1[100],n,i,pos,ele,dpos;
    
    printf("Enter the number of Elements");
    scanf("%d",&n);
    
    printf("Enter the Elements");
    for(i=0;i<n;i++){
        scanf("%d",&a1[i]);
    }
    printf("Enter the position for element to be added");
    scanf("%d",&pos);
    printf("Enter the Element");
    scanf("%d",&ele);
    if(pos>n){
        printf("Invalid Position\n");
    }
    else{
        for(i=n-1;i>=pos-1;i--){
            a1[i+1]=a1[i];
        }
        a1[pos-1]=ele;
    }
    
    printf(" Array After adition\n");
    for (i = 0; i <= n; i++){
       printf("%d\n", a1[i]);
        
    }
    printf("Enter the position of element to be Deleted");
    scanf("%d",&dpos);
    
    if(dpos>n){
        printf("deletion not posssible\n");
    }
    else{
        for(i=dpos-1;i<n;i++){
        a1[i]=a1[i+1];}
    }
    printf(" Array After Deletion\n");
    for (i = 0; i <= n-1; i++){
       printf("%d\n", a1[i]);
    }
    
    }
