#include <iostream>
#include <cstdio>
#include <vector>
#define gc getchar_unlocked
#define MAX_DIGITS 1024

int main(){
	int n,k;
	unsigned long long int cur=1,sol=1,i=0,j=0;
	scanf("%d %d",&n,&k);cd 
	bool dir=1;	
	while(k--){
		char x;
		std::cin>>x;

		 if (i+j < n) {
            if (x == 'R' && dir == 1) { // Right
                cur += 2*i+1;
                ++j;
            } else if (x == 'L' && dir == 1) { // Left
                cur -= 2*j;
                --j;
            } else if (x == 'U' && dir == 1) { // Up
                cur -= 2*j+1;
                --i;
            } else if (x == 'D' && dir == 1) { // Down
                cur += 2*i+2;
                ++i;
            } else if (x == 'R' && dir == 0) { // Right
                cur += 2*j+2;
                ++j;
            } else if (x == 'L' && dir == 0) { // Left
                cur -= 2*i+1;
                --j;
            } else if (x == 'U' && dir == 0) { // Up
                cur -= 2*i;
                --i;
            } else if (x == 'D' && dir == 0) { // Down
                cur += 2*j+1;
                ++i;
            }
            
            if (i+j == n) cur--;
        }
        
        else { // i+j >= n
            if (x == 'R' && dir == 1) { // Right
                cur += (n-1-j)*2;
                ++j;
            } else if (x == 'L' && dir == 1) { // Left
                cur -= (n-1-i)*2+1;
                --j;
            } else if (x == 'U' && dir == 1) { // Up
                cur -= (n-1-i)*2+2;
                --i;
            } else if (x == 'D' && dir == 1) { // Down
                cur += (n-1-j)*2+1;
                ++i;
            } else if (x == 'R' && dir == 0) { // Right
                cur += (n-1-i)*2+1;
                ++j;
            } else if (x == 'L' && dir == 0) { // Left
                cur -= (n-1-j)*2+2;
                --j;
            } else if (x == 'U' && dir == 0) { // Up
                cur -= (n-1-j)*2+1;
                --i;
            } else if (x == 'D' && dir == 0) { // Down
                cur += (n-1-i)*2;
                ++i;
            }
        }
        
        sol += cur;
        dir = !dir;
	}
	printf("%lld\n",sol);
	return 0;
}


