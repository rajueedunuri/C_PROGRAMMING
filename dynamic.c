#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	int *mem_alloc =NULL;
	int *mem_alloc_1 =NULL;
	int *mem_alloc_2 =NULL;
	size_t size = 10*sizeof(int);
	int array[40];

	if(mem_alloc == NULL)
	{
		printf("Malloc:Memory allocation not started\n ");
	}
	mem_alloc = (int *)malloc(8*sizeof(int));
	if(mem_alloc == NULL)
	{
		printf("Malloc:memory not allocated\n");
	
	}
	else
	{
	printf("Malloc: memory allocated%zu\n",mem_alloc);
	
	}
	mem_alloc_1 = (int *)calloc(10,sizeof(int));
	if(mem_alloc == NULL)
	{
		printf("calloc: memory not created\n");
	}
	else
	{
		printf("calloc: memory created%zu\n",mem_alloc_1);
	
	}
	mem_alloc_2 = (int *)realloc(mem_alloc,size);
	if(mem_alloc_2 == NULL)
	{
		printf("Realloc:memory not reallocted\n");
	}
	else
	{
		printf("realloc:memory reallocated %zu\n",size);
		printf("Realloc:\npointer%zu\n",sizeof(mem_alloc_2));
		for(int i = 0;i <= 40;i++)
		{
		array[i] = i;		
		printf("%d\t",array[i]);
		}
	}




}
