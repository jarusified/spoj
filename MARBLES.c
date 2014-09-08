#include<stdio.h>


long long nck(int n,int k){
	long long int val=1LL;
	int mul=n,div=1;
	int r=k<n-k?k:n-k;
	while(div<=r){
		val=(val*mul--)/div++;
	}
	return val;
}
int main(){
	int t,k,n;
	long long int ans=0LL;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&k);
		ans=nck(n-1,k-1);
		printf("%lld",ans);
	}
	return 0;
}
