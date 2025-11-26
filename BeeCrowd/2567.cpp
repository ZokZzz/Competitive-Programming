#include<bits/stdc++.h>
using namespace std;
int main() {
 ios_base::sync_with_stdio(0);
 cin.tie(0);
	int n=0;
	while(cin>>n) {
		deque<int>a(n, 0);
		for(int i=0; i<n; i++) {
			cin>>a[i];
		}//for

		sort(a.begin(), a.end());

		int sum=0;
		while(!a.empty()) {
			if(a.size()==1) {
				break;
			}
			sum+=(a.back() - a.front());
			a.pop_back();
			a.pop_front();
		}//while
		cout<<sum<<"\n";
	}//while
    return 0;
}
