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
int unite(int x,int y, int fa[]){
	x=find(x,fa);
	y=find(y,fa);
	if(x!=y)fa[x]=y;
}

void solve(){

	LL n;
	cin >> n;

	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}


