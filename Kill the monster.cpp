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
#define INF 1e10+7
#define __gcd gcd
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

bool isPT(LL x){
	return (x&&(!(x&(x-1))));
}

LL sumPairs(vi num,LL n,LL target){
	map<LL,LL> pairs;
	LL count=0;
	for(LL i=0;i<n;i++){
		/*search if the complement exist inside the map*/
		if(pairs.find(target-num[i]) != pairs.end()){
			/*put all the total element into a variable*/
			count+=pairs[target-num[i]];
		}
		pairs[num[i]]++;
	}
	return count;
}

/*codeForce Round : #122 (Div. 2)*/

/*
	solution idea : 
	the player win if only if the Hm ( monster healt ) / Dc ( demage character ) is 
	less then Hc ( Character Health ) / Dm (demage monster )
	
	and there is coin k we can use to increase our attack stat or healt stat
	
	Hc' = Hc + i*a
	Dc' = Dc + (k-i)*w
	
	we can iterate i throgh 0..k to find if the desire rasio is found, 
	if yes print YES if no print NO 

*/

void solve(){
	
	LL hc,ac,hm,am,k,w,a;
	cin >> hc >> ac >> hm >> am >> k >> w >> a;
	for(LL i=0;i<=k;i++){
		/*find the ceil rasio*/
		LL ya = (hm%(ac+((k-i)*w))) == 0 ? hm/(ac+((k-i)*w)) : hm/(ac+((k-i)*w))+1;
		LL yb = (hc+(i*a))%am == 0 ? (hc+(i*a))/am : (hc+(i*a))/am+1;
		if(ya <= yb){
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
	

}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
