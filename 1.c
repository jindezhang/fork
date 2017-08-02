#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("%d\n",__LINE__);
	pid_t a = fork();
	if(a == 0)
	{
		printf("child:%d\n",getpid());
	}
	if(a > 0)
	{
		printf("parent:%d\n",getpid());
		printf("his child:%d\n",a);
	}
	return 0;
}

