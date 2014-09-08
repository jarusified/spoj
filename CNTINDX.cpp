#include<iostream>
#include<cstdio>
#include<math.h>

using namespace std;

template<class T>
class SegmentTree{
	int *a,size;
	public:
		SegmentTree(int N){
			int x=(int)(ceil(log2(N)))+1;
			size=2*(int)pow(2,x);
			a=new int[size];
//			memset(a,-1,sizeof(a));	
		}
		void init(int node,int start, int end,T *array){
			if(start==end){
				a[node]=start;
			}
			else{
				int mid=(start+end)/2;
				init(2*node,start,mid,array);
				init(2*node+1,mid+1,end,array);
				if(array[a[2*node]]<=array[a[2*node+1]]){
					a[node]=a[2*node];
				}
				else{
					a[node]=a[2*node+1];
				}
			}
		}
		int query(int node,int start,int end,int i,int j,T *array,int key,int count){
			if(i>end || j<start){
				return -1;
			}
			if(start>=i && end <=j){
				return a[node];
			}
			int mid=(start+end)/2;
			int k=query(2*node,start,mid,i,j,array,key,count);
			int l=query(2*node+1,mid+1,end,i,j,array,key,count);
			if(array[k]==key || array[l]==key){
				count++;
			}
			if(k==-1){
				return l;
			}
			if(l==-1){
				return k;
			}
			printf("%d",count);

		}
};
int main(){
	int t,q,count=0,x,i,j,num,end=0;
	int arr[200001];
	scanf("%d",&t);
	while(t--){
		scanf("%d",&q);
		if(q==0)
			{if(end==0) printf("invalid");
			else{
				arr[end]=0;
				end--;
			}
		}
		else if(q==1){
				scanf("%d\n",&num);
				arr[end]=num;
				end++;
				}
		else if(q==2){
			scanf("%d %d %d\n",&x,&i,&j);
			SegmentTree<int> s(num);
			s.init(1,0,num-1,arr);
			s.query(1,0,num-1,i-1,j-1,arr,x,0);
		}
	}
	return 0;
}
