#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,k,a[1000010];
deque<int>q;
signed main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=1;i<=n;i++){
		while(!q.empty()&&q.front()<i-k+1)q.pop_front();
		while(!q.empty()&&a[q.back()]>=a[i])q.pop_back();
		q.push_back(i);
		if(i>=k)cout<<a[q.front()]<<" ";
	}
	cout<<endl,q.clear();
	for(int i=1;i<=n;i++){
		while(!q.empty()&&q.front()<i-k+1)q.pop_front();
		while(!q.empty()&&a[q.back()]<=a[i])q.pop_back();
		q.push_back(i);
		if(i>=k)cout<<a[q.front()]<<" ";
	}
	return 0;
}
