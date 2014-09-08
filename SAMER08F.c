#include<stdio.h>

int main(){
	long long int a;
	scanf("%lld",&a);
	while(a){
		printf("%lld",(a*(a+1)*(2*a+1))/6);
		scanf("%lld",&a);
	}
	return 0;
}
