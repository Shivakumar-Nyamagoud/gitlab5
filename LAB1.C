hiiii
#include<stdlib.h>
int *stack,top=-1,sz=0;

		int main()
		{
			int pop();
			void push(int ele);
			
			int ch,item;
			stack=(int*)malloc(sz*sizeof(int));
			for(;;)
			{
				printf("enter 1,push 2.pop 3.quit\n");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:printf("enter the element to push");
					scanf("%d",&item);
					push(item);
					break;
					case 2:pop();
					break;
					case 3:exit(0);
				}
			}
			return 0;
		}
		void push(int ele)
{
	if(top==sz-1)
	{
		printf("stack overflow");
		sz++;
		printf("stack size increased to %d\n",sz);
		stack=(int*)realloc(stack,sz*sizeof(int));
	}
		top++;
		stack[top]=ele;
		printf("%d pushed\n",ele);
	}
	void pop()
	{
		int ele;
		if(top==-1)
		{
			printf("stack underflow");
			exit(0);
		}
		else
		{
			ele=stack[top];
			printf("popped item is %d:",ele);
			--top;
			sz--;
			printf("stack capacity decreased to %d\n",sz);
			stack=(int*)realloc(stack,sz*sizeof(int));
		}
}
