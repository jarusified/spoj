#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;


int extract(string s){
	int ans=0;
	for(int i=0;i<s.length();i++){	
		if(!isdigit(s[i])){
			return -1;
		}
		else{
			ans=ans*10+(s[i]-'0');
		}
	}
	return ans;
}
int main(){
	string s1,s2,s3,s4,s5;
	int t;
	int num1,num2,num3;
	scanf("%d",&t);
	getchar();
	while(t--){
		cin>>s1>>s2>>s3>>s4>>s5;
		getchar();
		num1=extract(s1);
		num2=extract(s3);
		num3=extract(s5);
		if(num1<0) {num1=num3-num2;}
		if(num2<0) {num2=num3-num1;}
		if(num3<0) {num3=num1+num2;}
		cout<<num1<<" "<<'+'<<" "<<num2<<" "<<'='<<" "<<num3<<"\n";
	}
}
