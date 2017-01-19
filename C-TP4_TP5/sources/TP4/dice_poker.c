#include <time.h>
#include <stdio.h>

int main() {
   int res;
   
   /* initialise le generateur pseudo-aleatoire */
   srand(time(NULL));
   
   manche();
   
   /* Programme fini avec succes */
   return 0;
}

int manche()
{
	int j1[5];
	int j2[5];
	int i=0;
	for(i;i<4;i++)
	{
		j1[i] = rand() % 6 + 1;
		j2[i] = rand() % 6 + 1;
	}

	char j1_name[4] = {'m','o','i','\0'};
	char j2_name[4] = {'t','o','i','\0'};
	
	afficher(j1_name,j1);
	afficher(j2_name,j2);
}

void afficher(char *name, int hand[5])
{
	printf("%s : ",name);
	int i=0;
	for(i;i<4;i++)
	{
		printf("%d ",hand[i]);
	}
	printf("\n");
}
