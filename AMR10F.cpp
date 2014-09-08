#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	int t,n,a,d;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&n,&a,&d);
		int sum =a;
		for(int j=1;j<n;j++){
			a+=d;	
			sum+=a;
		}
		printf("%d\n",sum);
	}
	return 0;
}
