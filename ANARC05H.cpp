#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstddef>
#include <cctype>
#include <cstring>


using namespace std;
int  dp[5000][256],len;
char num[32];
int recur(int pos,int prev){
	if(pos==len) return 1;
	int &val = dp[pos][prev];
	if(val!=-1) return val;
	val=0;
	for(int i=pos;i<len;i++){
		if(i=len){
			break;
		}
		if(num[i]<=2 && num[i+1]<=6){
			val+=recur(i+2,sum)+2;
		}
		else{
			val+=recur(i+1,sum)+1;
		}
	}
	return val;
	
}
int main(){
	while(scanf("%s",num)==1 && isdigit(num[0]) && num[0]!=0 ){
		memset(dp,-1,sizeof dp);
		len=strlen(num);
		printf("%d\n",ecur(0,0));
	}
	return 0;
}