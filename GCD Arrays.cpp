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

/*
	
	problem simplification :
	
	we want to check if there is exist such array with gcd not equal to one
	we can do some operation to the array so that we can get the desired condition
	and the opration is to multiply 2 number inside the array and merge it as one 
	
	ex : [3,4,5,6] -> [3,20,6]
	
	we can do this operations as mush as k times
	
	solution idea : 
	
	the common factor of the array if exist should be a prime number (2,3,5,7...)
	and as we know if there is a sequence of number, most of them has to be devisible
	by two, so we can search how many even number inside the array then count how many
	that is not divisble by 2 (odd number)
	
	after counting all the odd number we can change them to even number by multiplying
	all of them with even number , and we can do with as long as it not exceed k times


*/

/*codeForce Round : #767 (Div. 2)*/

void solve(){
	LL l,r,k,count=0;
	cin >> l >> r >> k;
	LL rem,total = r-l+1;
	if(r==l && r != 1){
		cout << "YES\n";
		return;
	}
	if(r==l && r == 1){
		cout << "NO\n";
		return;
	}
	if(total%2 == 0){
		rem = total/2;
	}else{
		if(l%2!=0)rem=(total/2)+1;
		else rem=total/2;
	}
	if(rem<=k)cout << "YES\n";
	else cout << "NO\n";
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
