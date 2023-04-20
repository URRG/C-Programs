#include <stdio.h>
int search(int*,int,int);
int main()
{
    int n;
    printf("Enter the size of integer array-");
    scanf("%d",&n);
    int arr[n];
    printf("\n Enter the array elements-");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    printf("\n Enter the number to be searched in the array-");
    scanf("%d",&target);
    int ans=search(arr,target,n);
    if(ans!=-1){
    printf("\n The greatest elements is present at index %d",(ans+1));
    }
    else{
        printf("\n Target element not found");
    }
    return 0;
}
