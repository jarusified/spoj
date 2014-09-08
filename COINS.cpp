#include<iostream>
#include<map>
#include<algorithm>
#include<cstdio>
using namespace std;
typedef long long ll;
	
map<ll,ll> mymap;
map<ll,ll>::iterator iter;

ll dp(ll n){
	if(n==0) return 0;
	iter=mymap.find(n);
	if(iter==mymap.end()){
		ll v=max(n,dp(n/2)+dp(n/3)+dp(n/4));
		mymap.insert(iter,pair<ll,ll>(n,v));
		return v;
	}
	else return (*iter).second;
}
int main(){
	ll n;
	while(~scanf("%lld",&n)){
		printf("%lld\n",dp(n));
	}	
	return 0;
}
