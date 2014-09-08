#include<iostream>
#include<cstdio>

using namespace std;

typedef long long ll;
ll z(ll n){
	ll count =0;
	while(n!=0){
		count+=n/5;
		n/=5;
	}
	return count;
}
int main(){
	ll t,num;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&num);
		printf("%lld\n",z(num));
	}
	return 0;
}
