#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

#define c 5678
#define r 1234


int main(){
	char s[5];
	int row[r],col[c];
	int x,y,z;
	for(int i=0;i<=1234;i++) row[i]=i;
	for(int i=0;i<=5678;i++) col[i]=i;
	while(scanf("%s",&s)==1){
		switch(s[0]){
			case 'R':
				scanf("%d %d",&x,&y);
				swap(row[x],row[y]);
				break;
			case 'C':
				scanf("%d %d",&x,&y);
				swap(col[x],col[y]);
				break;
			case 'Q':
				scanf("%d %d",&x,&y);
				printf("%d \n",(row[x]-1)*c+col[y]);
				break;
			case 'W':
				scanf("%d",&z);
				int row_val=(z+c-1)/c;
				int col_val=(z-1)%c+1;
				printf("%d %d\n",row[row_val],col[col_val]);
				break;
		}
	}
	return 0;
}