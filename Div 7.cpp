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

/*edu codeForce Round : #122 (Div. 2)*/

/*
	problems simplification :
		if we are given an integer number we want to return a value that is 
		divisble by 7 than find the closest value to the given number
		
		ex : 15 -> 14
			 20 -> 21
			 25 -> 21
		
	solution idea : 
		the only number we need to change is the right most number / the least 
		significant number , we can divide the given number by 10 and do floor
		operation and times it to 10
		
		ex : 378 -> 370
			 223 -> 220
			 
		and after that we increase the number by one until it divisible by 7
		
		ex : 25 -> 20 -> 21


*/

void solve(){
	LL n;
	cin >> n;
	if(n%7 == 0){
		cout << n << "\n";
	}else{
		/*if not divisible by 7 we need to make the last element become 0*/
		n=n/10*10;
		/*as long as it is not divisible by 7 increase the value*/
		while(n%7)n++;
		cout << n << "\n";
	}
	
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
