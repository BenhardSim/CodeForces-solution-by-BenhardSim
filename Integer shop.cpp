/*By : Benhard Sim*/
#include <bits/stdc++.h>
using namespace std;
#define LL long long 
#define pb(x) push_back(x)
#define f first
#define s second
#define mp(x,y) make_pair(x,y)
typedef pair<LL,LL> ii;
typedef vector<LL> vi;

/*codeForce Round : # (Div. )*/

void solve(){
	LL n;
	cin >> n;
	vector<vi> num;
	for(LL i=0;i<n;i++){
		LL temp1,temp2,temp3;
		vi temp;
		cin >> temp1 >> temp2 >> temp3;
		temp.pb(temp1);
		temp.pb(temp2);
		temp.pb(temp3);
		num.pb(temp);
	}
	
	vi minL = num[0];
	vi maxR = num[0];
	vi maxLen = num[0];
	for(LL i=0;i<num.size();i++){
		LL cost = 0;
		if(num[i][0] < minL[0])minL = num[i];
		else if(num[i][0] == minL[0]){
			if(num[i][2] < minL[2]){
				minL = num[i];
			}
		}
		
		if(num[i][1] > maxR[1])maxR = num[i];
		else if(num[i][1] == maxR[1]){
			if(num[i][2] < maxR[2]){
				maxR = num[i];
			}
		}
		
		if(maxLen[1]-maxLen[0]+1 < num[i][1]-num[i][0]+1){
			maxLen = num[i];
		}else if(maxLen[1]-maxLen[0]+1 == num[i][1]-num[i][0]+1){
			if(num[i][2] < maxLen[2]){
				maxLen = num[i];
			}
		}
		
		cost = maxR[2] + minL[2];
		if(maxLen[1]-maxLen[0]+1 == maxR[1]-minL[0]+1){
			cost = min(cost,maxLen[2]);
		}
		cout << cost << "\n";
	}
	
	
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t=1;
	cin >> t;
	while(t--){
		solve();
	}
	
	return 0;
}
