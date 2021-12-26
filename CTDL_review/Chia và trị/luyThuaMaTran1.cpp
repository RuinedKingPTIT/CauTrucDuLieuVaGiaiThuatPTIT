#include"stdio.h"
long long M=1e9+7;
struct Matran{
	long long f[11][11];
};
int n;
Matran operator *(Matran A, Matran B){
	Matran C; int i,j,k; 
	for(i=0;i<=n-1 ; i++)
		for(j=0;j<=n-1; j++){
			C.f[i][j]=0;
			for(k=0; k<=n-1; k++)
				C.f[i][j]=(C.f[i][j]+(A.f[i][k]*B.f[k][j])%M)%M;
		}
	return C;
}
Matran powerM(Matran A, long long n){
	if(n == 1) return A;
	Matran x = powerM(A,n/2);
	if(n%2==0)return x*x;
	return x*x*A;
}
main(){
	int t; long long k;
	Matran A; scanf("%d", &t);
	while(t--){
		scanf("%d %lld", &n, &k);
		int i, j;
		for(i = 0 ; i < n ; i++){
			for(j = 0 ; j < n ; j++)
				scanf("%lld", &A.f[i][j]);
		}
		Matran KQ = powerM(A,k);
		for(i = 0 ; i < n ; i++){
			for(j = 0 ; j < n ; j++)
				printf("%lld ", KQ.f[i][j]);
			printf("\n");
		}
	}
}

