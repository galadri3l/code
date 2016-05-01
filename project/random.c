#include<stdio.h>
#include<stdlib.h>

char *die_faces[] = {
	"	",
	"   *   ",
	"	",

	"	",
	" *   * ",
	"	",

	"	",
	" * * * ",
	"	",

	" *   * ",
	"	",
	" *   * ",

	" *   * ",
	"   *   ",
	" *   * ",

	" *   *	",
	" *   * ",
	" *   * ",
};

int main(int argc,char **argv)
{
	int nfaces;
	int i,j,k;
	time_t now;
	
	if(argc !=2) {
		fprintf(stderr, "usage: %s number-die-faces\n",argv[0]);
		exit(1);
	}

	nfaces = atoi(argv[1]);

	if(nfaces <= 0)
	{
		fprintf(stderr, "usage: %s number-die-faces\n",argv[0]);
		fprintf(stderr, "\tUse a positive numbe!\n");
		exit(1);
	}

	for(i = 1;i <= nfaces; i++) {
		time(& now);
		srand(now);
		j = rand() % 6;
		printf("+-------+\n");
		for( k = 0; k < 3; k++)
			printf("|%s|\n",die_faces[(j*3) + k]);
		printf("+-------+\n\n");
	}

	return 0;
}
