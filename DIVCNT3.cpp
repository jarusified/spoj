#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;
typedef long long ll;
int ans(ll num){
	ll count=1;
	ll i;
	while(num){	
		ll m=num*num*num;
		
		for(i=1;i<=m;i++){
			if(m%i==0){
				count++;		
			}
		}
		if(m==1){
			count--;
		}
		num-=1;
	}
	return count;
}
int main(){
	int t;
	ll n;
	scanf("%d",&t);
	while(t--){
		scanf("%lld",&n);
		printf("%d\n",ans(n));
	}		
	return 0;

}
