#include <iostream>
#include <cstdio>
#include <vector>
#define gc getchar_unlocked
#define MAX_DIGITS 1024

void scanint(int &x){
	register int c=gc();
	x=0;
	int neg=0;
	for(;(c<48||c>57);c=gc());
	if(c=='-'){neg=1;c=gc();}
	for(;c>47 && c<58;c=gc()){
		x=(x<<1)+(x<<3)+c-48;
	}
	if(neg){
		x=-x;
	}
}

int karatsuba(int a,int b){

}
int main(){
	int n;
	int a,b;
	long long ans=0;
	scanint(n);
	while(n--){
		long long ans=0;
		scanf("%d %d",&a,&b);
		ans=a*b;
		printf("%lld\n",ans);
	}
	return 0;
}