#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int i;
	pid_t a;
	for(i = 0; i<50;i++)
	{
		sleep(2);
		printf("i =%d uid is %d\n",i,getpid() );
		a = fork();
		if(a > 0)
			break;
	}
	if(a >0)
		wait(NULL);
	return 0;
}