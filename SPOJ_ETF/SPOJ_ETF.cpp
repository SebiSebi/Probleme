#include<iostream>
#include<fstream>
using namespace std;

#define NMAX 1000001

int phi[NMAX];

void ciur(int n)
{
	int i,j;
	for(i=1;i<=n;i++)
		phi[i]=i;
	for(i=2;i<=n;i++) {
		if(phi[i]!=i)
			continue;
		phi[i]=i-1;
		for(j=i+i;j<=n;j=j+i)
			phi[j]=(phi[j]/i)*(i-1);
	}
}

int main ()
{
	int t,n;
	//freopen("code.in","r",stdin);
	scanf("%d",&t);
	ciur(1000000);
	while(t--) {
		scanf("%d",&n);
		printf("%d\n",phi[n]);
	}
	return 0;
}