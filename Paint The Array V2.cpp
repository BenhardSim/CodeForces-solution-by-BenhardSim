/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)
#define f first
#define s second
#define mp(x,y) make_pair(x,y)

int gcd(LL a, LL b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

int findGCD(vector<LL> arr)
{
    int result = arr[0];
    for (int i = 1; i<arr.size(); i++)
    {
        result = gcd(arr[i], result);

        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

void solve(){
	
	LL n;
	cin >> n;
	int gcdA,gcdB;
	int res = 0;
	vector<LL> arrA,arrB;
	for(LL i=0;i<n;i++){
		LL temp;
		cin >> temp;
		if(i%2!=0)arrB.pb(temp);
		else arrA.pb(temp);
	}
	gcdA = findGCD(arrA);
	gcdB = findGCD(arrB);
	bool find = false;
	
	if(gcdA != gcdB){
		if(gcdB != 1 && !find){
			res = gcdB;
			for(LL i=0;i<arrA.size();i++){
				if(arrA[i]%gcdB == 0){
					res = 0;
					break;
				}
				else find = true;
			}
		}
		
		if(gcdA != 1 && !find){
			res = gcdA;
			for(LL i=0;i<arrB.size();i++){
				if(arrB[i]%gcdA == 0){
					res = 0;
					break;
				}
				else find = true;
			}
		}
	}
	
	cout << res << "\n";
//	cout << gcdA << " " << gcdB << "\n";
	
}

int main(){
	
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}



