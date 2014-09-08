#include<iostream>
#include<cstdio>
using namespace std;

int reverse(int  n){
	int  ans=0;
	while(n){
		ans=(ans*10)+(n%10);
		n/=10;
	}	
	return ans;
}
int main(){
	int  t,x,y;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&x,&y);
		printf("%d\n",reverse(x));
		printf("%d\n",reverse(reverse(x)+reverse(y)));
	}
	return 0;
}
