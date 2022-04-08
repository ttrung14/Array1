#include <stdio.h>
#include <stdlib.h>
#define maxn 100001
int n, sum;
int i, j;
int a[maxn][maxn];
int p[maxn];
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {	

	scanf("%d",&n);
	for(i = 1; i <= n; i++) scanf("%d",&p[i]);
	scanf("%d",&sum);
	
	for(i = 1; i <= n; i++)
	{
		a[0][i] = p[i];
	}
	for(j = 1; j <= n; j++)
	{
	    a[j][0] = p[j];
	}
	for(i = 1; i <= n-1; i++)
	{
		for(j = i+1; j <= n; j++)
		{
			a[i][j] = a[0][i] + a[j][0];
			printf("%d\n",a[i][j]);
			if(a[i][j]==sum ) printf("Pair found:%d %d \n", a[0][i], a[j][0]);
		}
	}
	return 0;
}
