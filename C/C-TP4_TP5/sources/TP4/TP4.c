#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
	int a = (int)strlen(argv[0]);
	printf("%d",a);
	int i;
	i=1;
	for(i;i<argc-1;i++)
	{
printf("L'argument %d contient %d caractere(s)",i,(int)strlen(argv[i]));
	}
	return 0;
}
