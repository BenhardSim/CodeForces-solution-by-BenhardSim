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

/*codeForce Round : #748 (Div. 3)*/

/*
	idea of solution : 
	we are given array [a1,a2,a3,.........an]
	we need to find an integer K so that if we substract ai with k
	for numbers of time all the value inside the array will be the same
	
	ex : [1 5 3 1 1 5] -> [1,1,1,1,1,1]
	
	1st observation
	all the value of the array will end up became the smallest value 
	before any operation conducted
	
	2nd ovservation
	the formula for each element of array to become the smallest
	value is : 
	
	ai - k*(xi) = small 
	ai = element of array at index i
	k = the number we search for
	xi = the number of k we use to substract ai with k
	
	3nd observation
	we can change the formula to become the following
	ai - small = k*(xi)
	
	what we can get for the formula above is :
	every difference between ai and the smallest element will resulted to
	a number that is divisible by k
	
	so if we found the difference between every element in the array and
	the smallest number we know that the difference always divisble by k
	that means they all have the same FACTOR
	
	to find that FACTOR we can use GCD( greater common divisor ) algorithm
	to find the FACTOR for all element and the result will be the answer
	
	

*/



void solve(){
	LL n,small=INF;
	cin >> n;
	vi nums,dif;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		/*the smallest value*/
		small = min(small,temp);
		nums.pb(temp);
	}
	LL sm=0;
	for(LL i=0;i<n-1;i++){
		if(nums[i]==nums[i+1])sm=1;
		else{
			sm=0;
			break;
		}
	}
	if(sm){
		cout << "-1\n";
		return;
	}
	LL ans=0;
	for(LL i=0;i<nums.size();i++){
		if(nums[i]!=small){
			ans=gcd(ans,nums[i]-small);
		}
	}
	cout << ans << "\n";
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
