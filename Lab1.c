#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char **argv) 
{
	int 	n = atoi(argv[1]);
	int 	k = atoi(argv[2]);
	float 	rezult = 0;
	rezult = (float)n / (float)(k + 1);
	printf("%d\n", (int)ceil(rezult));
	return 0;		
}
