#include<iostream>
#include<cstdio>
using namespace std;
#define get getchar_unlocked
#define MIN(a,b) { if((a)<(b)) (a)=(b); }
#define MAX(a,b) { if((a)>(b)) (a)=(b); }

int main(){
	long long t,n,i,head,tail,ans;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld",&n);
		long long arr[n];
		for(i=0;i<n;i++){
			scanf("%lld",&arr[i]);
		}
		head=ans=0,tail=n-1;
		while(head<tail){
			ans=max(ans,(tail-head)* min(arr[head],arr[tail]));
			if(arr[head]>arr[tail]) tail--;
			else head++;
		}
		printf("%lld",ans);
	}
}
