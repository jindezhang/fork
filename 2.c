#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int i;
	pid_t a;
	for(i = 0; i<10 ;i++)
	{
		printf("i =%d uid is %d\n",i,getpid() );
		a = fork();
		if(a > 0)
			break;
	}
	if(a >0)
	// 	for(i = 0; i<10 ;i++)
			wait(NULL);
	return 0;
}