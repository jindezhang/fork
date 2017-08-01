#include <stdio.h>
#include <unistd.h>

void strpri(char *str);

int main(int argc, char const *argv[])
{
	int i;
	pid_t a;
	a = fork();
	if(a >0)
	{
		char *str = "qwertyuiop";
		strpri(str); 
		wait(NULL);
	}
		
	if(a == 0)
	{
		char *str1 = "asdfgghjkl;";
		strpri(str1);
	}
	return 0;
}

void strpri(char *str)
{
	while(*str != '\0')
	{
		sleep(2);
		printf("%c", *str);
		fflush(stdout);
		str++;
	}
}
