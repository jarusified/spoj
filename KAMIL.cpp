#include<iostream>
#include<cstdio>
int main(){int i=10;while(i--){int p=1;char c;while((c=getchar())>'@'){p*=(c=='T'|c=='D'|c=='L'|c=='F')?2:1;}printf("%d\n",p);}return 0;}
