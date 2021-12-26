// chuong trinh tao ma tran xoan oc nguoc
// tao ham tu tang bang bien static
#include"stdio.h"
#include"math.h"
int increase()
{
	int static n = 0;
	return ++n;
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[100][100];
	int i, j;
	int dem = 0;
	int left = 0, right = n-1, up = 0, down = n-1;
	do
	{
		for(i = left; i <= right; i++)
		{
			a[up][i] = increase();
		}
		up++;
		for(i = up; i <= down; i++)
		{
			a[i][right] = increase();
		}
		right--;
		for(i = right; i >= left ; i--)
		{
			a[down][i] = increase();
		}
		down--;
		for(i = down; i >= up ; i--)
		{
			a[i][left] = increase();
		}
		left++;
		dem+=1;
	}
	while(dem<=(n-1));
	// in ra
	for(i = 0 ; i < n; i++)
	{
		for(int j = 0 ; j < n ; j++)
			printf("%d ", a[i][j]);
		printf("\n");
	}
}