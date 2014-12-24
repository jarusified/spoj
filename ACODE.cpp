#include <iostream>
#include <cstdio>
#include <string.h>



using namespace std;
long long dp[5001],len;
char num[5001];
long long  recur(int pos){
	if(pos>=len) return 1;
	if(dp[pos]) return dp[pos];
	long long  val=0;
		
		if(pos+1<len && 10*(num[pos]-'0')+num[pos+1]-'0'<=26){
			val+=recur(pos+2);
		}
			val+=recur(pos+1);
	return val;
	
}
int main(){
	while(scanf("%s",num)==1){
		if(num[0]=='0')  break;
		memset(dp,0,sizeof dp);
		len=strlen(num);
		printf("%lld\n",recur(0));
	}
	return 0;
}