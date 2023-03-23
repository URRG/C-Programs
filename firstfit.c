#include<stdio.h>
int main()
{
	int blocksize[10], processsize[10];
	int blockno, processno, temp[10], allo[10];
	int i, j;
	
	for(i = 0; i < 10; i++)
	{
		temp[i] = 0;
		allo[i] = -1;
	}
printf("Enter no. of blocks: ");
scanf("%d", &blockno);
printf("\nEnter size of each block: ");
for(i = 0; i < blockno; i++)
scanf("%d", &blocksize[i]);
printf("\nEnter no. of processes: ");
scanf("%d", &processno);
printf("\nEnter size of each process: ");
for(i = 0; i < processno; i++)
scanf("%d", &processsize[i]);
for(i = 0; i < processno; i++)       
	for(j = 0; j < blockno; j++)
	    if(temp[j] == 0 && blocksize[j] >= processsize[i])
		{
			allo[j] = i;
			temp[j] = 1;
				break;
		}
printf("\nBlock no.\tsize\t\tprocess no.\t\tsize");
for(i = 0; i < blockno; i++)
	{
    printf("\n%d\t\t%d\t\t", i+1, blocksize[i]);
		if(temp[i] == 1)
			printf("%d\t\t\t%d",allo[i]+1,processsize[allo[i]]);
		else
			printf("Not allocated");
	}
}

