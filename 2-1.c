#include <stdio.h>
#include <unistd.h>

int main(int argc, char const *argv[])
{
	int i;
	pid_t a;
	for(i = 0; i<10 ;i++)
	{
		
		a = fork();

		// if(a == 0)
		// 	printf("i =%d uid is %d\n",i,getpid() );
		if(a >0)
		{
			wait(NULL);
			printf("i = %d uid is %d\n",i,getpid() );
			break;
		}
		// if(a == 0)
		// 	continue;
	}
	
	
	return 0;
}