#include <stdio.h>

int main()
{
	printf("%d\n",__LINE__);
	fork();
	printf("%d\n",__LINE__);
	printf("%d\n",__LINE__);

	return 0;
}

