#include <stdio.h>
#include <math.h>

#include <stdio.h>
#include<math.h>
#include <stdlib.h>
int* sieve(int n){
	int *a=(int*)calloc(n+1,sizeof(int));
	int *b=(int*)calloc(n,sizeof(int));
	for(int i=2;i<=n;i++){
		a[i]=i;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(a[i]!=0){
			int j=i*i;
			while(j<=n)
			{
				a[j]=0;
				j+=i;
			}
		}
	}
	for(int i=2, j=0;i<=n;i++){
		if(a[i]!=0){
			b[j]=a[i];
			j++;
		}
	}
	return b;
}
int gcd(int m,int n){
	int *mp=sieve(m);
	int *np=sieve(n);
	int mf[100],nf[100];
	int y=0,z=0,i=0,j=0;
	while(m>1){
		if(m%mp[i]==0)
		{
			mf[y]=mp[i];
			y++;
			m=m/mp[i];
		}
		else
			i++;
	}
	while(n>1){
		if(n%np[j]==0)
		{
			nf[z]=mp[j];
			z++;
			n=n/np[j];
		}
		else
			j++;
	}
	int x=1,opcount=0;
	for(i=0;i<y;i++)
	{
		for(j=0;j<z;j++)
		{
			opcount++;
			if(mf[i]==nf[j])
			{
				x*=mf[i];
				nf[j]=0;
				break;
			}
		}
	}
	printf("Basic op count %d\n",opcount);
	return x;
}
void main(){
	int m,n;
	printf("Enter two numbers\n");
	scanf("%d %d",&m,&n);
	printf("GCD of these numbers is %d\n",gcd(m,n));
}
