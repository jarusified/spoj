#include <iostream>
#include <cstdio>
#include <math.h>

int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		int num;
		long long ans=0;
		scanf("%d",&num);
			int t=sqrt(num);
			for(int i=2;i<=t;i++){
				if(num%i==0){
					if(i==num/i){
						ans+=i;
					}
					else{
						ans+=i+num/i;
					}
				}
			}
			ans++;
			if(num==1){
				ans=0;
			}
		printf("%lld\n",ans);

	}

	return 0;
}

