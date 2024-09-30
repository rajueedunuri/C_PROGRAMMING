#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
	int ID;
	char name[50];

	struct student *next;

}student;

void traversal( student *T);
student * createnode(void);

student * createnode(void)
{
	student *n = (student *)malloc(sizeof(student));
	scanf("%d%s",&n->ID,n->name);
	n->next = NULL;
	return n;
}

void traversal(student *T)
{
	while(T)
	{
		printf("ID: %d name :%s\n",T->ID,T->name);
		T = T->next;
	}

}
int main(void)
{
	char ch = 'y';
	student *Head = NULL;
	student *new = NULL;
	student *last = NULL;

	while(ch == 'y')
	{
		new = createnode();
		if(Head == NULL)
			Head = new;
		else
			last->next = new;
		last = new;
		printf("do you want to create node (y/n)\n");
		getchar();
		scanf("%c",&ch);
	
	}
	traversal(Head);

return 0;
}
