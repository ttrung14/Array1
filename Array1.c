#include <stdio.h>
#include <stdlib.h>
#define maxn 100001
int n, sum;
int i, j;
int a[maxn][maxn];
int p[maxn];

int main() {	

	scanf("%d",&n);
	for(i = 1; i <= n; i++) scanf("%d",&p[i]);  // nhap du lieu
	scanf("%d",&sum);
	
	for(i = 1; i <= n; i++)
	{
		a[0][i] = p[i]; // khoi tao ma tran
	}
	for(j = 1; j <= n; j++)
	{
	    a[j][0] = p[j];  // khoi tao ma tran
	}
	for(i = 1; i <= n-1; i++)
	{
		for(j = i+1; j <= n; j++)
		{
			a[i][j] = a[0][i] + a[j][0];  // tinh tong 2 so
			if(a[i][j]==sum ) printf("Pair found:%d %d \n", a[0][i], a[j][0]); // kiem tra va dua ra ket qua
		}
	}
	return 0;
}
