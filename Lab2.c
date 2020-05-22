#include <stdio.h>
#include <stdlib.h>

int main(int arc, char**argv)
{
	int n, d, s;
	int i;
	n = atoi(argv[1]);
	d = atoi(argv[2]);	
	
	s = 0;
	for (i = 1; i <= n; i++)
		s += i; 
	s *= d;
	printf("%d\n", s);
	return 0;
}
