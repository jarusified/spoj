#include<iostream>
#include<cstdio>

using namespace std;

typedef long long ll;

int main(){
	ll t,num;
	scanf("%lld",&t);
	ll i,flag;
	while(t--){
		scanf("%lld",&num);
		while(num){
			while(num%i!=0 && i<num)	i++;
			num=num-i;
			flag++;	
			i=1;	
		}		
		if(flag%2==0){
			cout<<"Thankyou Shaktiman\n";
		}
		else{
			cout<<"Sorry Shaktiman\n";
		}
	}
	return 0;
}

