#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	int t,sum=0;
	int num;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&num);
		if(num>0){
			sum+=num;
		}
	}	
	printf("%d",sum);
	return 0;
}
