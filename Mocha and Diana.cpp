/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;

#define LL long long 
#define ull unsigned long long
#define pb(x) push_back(x)
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
#define fo(i, n) for (LL i = 0; i < n; i++)
#define INF 10e9+7
#define PI 3.14159265
#define bpl __builtin_popcountll
#define gcd __gcd 
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

long long gcd(long long int a, long long int b){
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

long long lcm(int a, int b){
    return (a / gcd(a, b)) * b;
}

int fa[1001],fb[1001];

/*DSU*/
/*
	Find operator
	searching for the deepest root of the tree
*/
int find(int x,int fa[]){
	if(fa[x]==x)return fa[x];
	else return fa[x]=find(fa[x],fa);
}
/*
	Union operator
	merging two disjoint set
*/
void unite(int x,int y, int fa[]){
	x=find(x,fa);
	y=find(y,fa);
	if(x!=y)fa[x]=y;
}

void solve(){

	LL n,m1,m2;
	cin >> n >> m1 >> m2;
	
	/*value initialization*/
	for(LL i=1;i<=n;i++){
		fa[i]=i;
		fb[i]=i;
	}
	
	while(m1--){
		LL u,v;
		cin >> u >> v;
		unite(u,v,fa);
	}
	while(m2--){
		LL u,v;
		cin >> u >> v;
		unite(u,v,fb);
	}
	LL tot=0;
	vector<ii> res;
	for(LL i=1;i<=n;i++){
		for(LL j=1;j<=n;j++){
			/*check if both i and j has a different parent in mocha's tree and diana's tree*/
			if(find(i,fa)!=find(j,fa)&&find(i,fb)!=find(j,fb)){
				unite(i,j,fa);
				unite(i,j,fb);
				tot++;
				res.pb(mp(i,j));
			}
		}
	}
	
	cout << tot << "\n";
	for(auto j:res){
		cout << j.f << " " << j.s << "\n";
	}
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	while(t--)solve();
	return 0;
}


