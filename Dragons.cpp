#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int s,n;
	vector<vector<int> >dragSP;
	cin >> s >> n;
	/*input*/
	for(int i=0;i<n;i++){
		int temp1,temp2;
		vector<int>dragV;
		cin >> temp1;
		cin >> temp2;
		dragV.push_back(temp1);
		dragV.push_back(temp2);
		dragSP.push_back(dragV);
	}
	
	cout << "\n";
	sort(dragSP.begin(),dragSP.end());

	for(int i=0;i<n;i++){
		if(s <= dragSP[i][0]){
			cout << "NO";
			return 0;
		}
		s+=dragSP[i][1];
	}
	cout << "YES";
	
	return 0;
}
