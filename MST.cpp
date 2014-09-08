#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

typedef long long ll;
#define edge pair<ll,ll>
#define Max 1000001

vector<pair<ll ,edge > > graph;
ll parent[Max],total,N,E;

void reset(){
	for(int i=1;i<=N;i++) parent[i]=i;
}
ll findset(ll x,ll *parent){
	if(x!=parent[x]){
		parent[x]=findset(parent[x],parent);
	}
	return parent[x];	
}
ll kruskal(){
	ll i,pu,pv;
	sort(graph.begin(),graph.end());
	for(i=total=0;i<4;i++){
		pu=findset(graph[i].second.first,parent);
		pv=findset(graph[i].second.second,parent);
		if(pu!=pv){
			total+=graph[i].first;
			parent[pu]=parent[pv];
		}
	}
	return total;
}

int main(){
	ll  i,u,v,w;
	scanf("%lld %lld",&N,&E);
	reset();
	while(E--){
		scanf("%lld %lld %lld",&u,&v,&w);
		graph.push_back(pair<ll,edge>(w,edge(u,v)));
	}
	kruskal();
	printf("%lld",total);
	return 0;
}
