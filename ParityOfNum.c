#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d\n",__builtin_parity(n));
	return 0;
}
