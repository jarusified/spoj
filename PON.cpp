#include<cstdio>
#include<math.h>
using namespace std;

typedef long long ll;
int main(){
	ll t;
	scanf("%lld",&t);
	while(t--){
		ll n;
		bool a=1;
		scanf("%lld",&n);
		if(n%2==0 && n>2){
			a=0;
		}
		for(ll i=3;i<=sqrt(n);i++){
			if(n%i==0){
				a=0;
			}
		}
		if(a){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
