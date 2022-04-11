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
#define __gcd
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

bool isPT(LL x){
	return (x&&(!(x&(x-1))));
}

bool isOne(int mask, int i){
	/*
		cek if binary mask at index i is equal to one 
		ex : mask = 9 -> (1001) and i = 3
		that means is the binary at index i=3 is equal to one ?
		and the answer is yes
		binary 	: 1 0 0 1
		index	: 3 2 1 0
	*/
	return (mask>>i)&1 == 1;
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

LL computeXOR(LL n)
{
  if (n % 4 == 0)
    return n;
  if (n % 4 == 1)
    return 1;
  if (n % 4 == 2)
    return n + 1;
  return 0;
}

/*codeForce Round : #742 (Div. 2)*/

/*
	solution idea : 
	let say there is [a , b]
	the elements of the array containing the satisfied result should at least have
	a length since the mex value of that array will be a
	
	ex : [0,1,2,3,....,a-1] -> len=a
	
	next we need to precalculate all the xor value of [0..a-1]
	
	ex : (0^1^2^3...^a-1) = x
	
	let say the value of the precalculate xor [0..a-1] is x,
	that means there are gonna be some posibilities 
	
	1st posibility 
	the value of x is equal to b , the desired xor value
	then we can just print a as the answer since the length of the array [0..a-1]
	is a
	
	2nd posibility
	the value of x IS NOT equal to b AND the value of x IS NOT equal to a
	if this happen then we need to think extra, we need to think the special 
	property of xor
	
	let say xor(0..a-1) = x we want to know if there is a number that is 
	xored with x will equal to b, or in mathematical term
	
						x ^ k = b
						
	since this is a xor operation than this is also true
	
						x ^ b = k
						
	that mean we can add x ^ b to the array 
	
	res = [0..a-1,(x^b)]
	
	now let analys
	
	xor( xor(0..a-1), xor(x,b) ) = xor ( x ,xor(x,b) )
								 = xor (x , x , b)
								 = b
								 
	remember x^x = 0 and b^0 = b
	
	
*/

void solve(){
	
	LL a,b;
	cin >> a >> b;
	LL val=0;
	val=computeXOR(a-1);
	if(val==b){
		cout << a << "\n";
	}else if(val!=b && (val^b)!=a){
		cout << a+1 << "\n";
	}else if(val!=b && (val^b)==a){
		cout << a+2 << "\n";
	}
	
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--)solve();
	return 0;
}
