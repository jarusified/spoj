#include<cstdio>

using namespace std;
#define Max 1000000000000000LL
typedef long long ll;
int main(){
	ll a[2001],ans[2001];
	a[0]=1;
	a[1]=2;
	for(int i=2;;i++){
		a[i]=a[i-1]+a[i-2];
		if(a[i}>Max) break;
	}
	int t;
	ll n;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		
	}
	
	return 0;
}
