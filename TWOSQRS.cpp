#include<iostream>
#include<cstdio>
#include<vector>
#include<math.h>

using namespace std;

typedef long long ll;
vector<ll> vec;
vector<ll>::iterator iter;

void primes(ll n){
	vec.clear();
	ll count;
	bool mt=0;
	iter=vec.begin();
	while(n%2==0){
		n=n/2;
	}
	for(int j=3;j<sqrt(n);j+=4){
		while(n%j ==0){
			vec.insert(iter,j);
			n/=j;
		}
	}
	if(n>2){
		vec.insert(iter,n);
	}
	for(ll i=0;i<vec.size();i++){
		if(vec[i]%4==3){
			count++;
			n/=vec[i];
		}
		if(count%2!=0){
			printf("No\n");
			mt=1;	
			break;
		}
	}
	if(!mt && n%4!=3) printf("Yes\n");
	else if(!mt) printf("No\n");
}
int main(){
	ll t,num;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&num);
		primes(num);	
	}
	return 0;

}
