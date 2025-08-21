#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,f[110][110],a[110],ans;
signed main(){
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i],f[i][1]=a[i];
	for(int j=2;j<=n;j++){
		for(int i=1;i<=n-j+1;i++){
			f[i][j]=j*abs(a[i]-a[i+j-1]);
			for(int k=1;k<j;k++)
				f[i][j]=max(f[i][j],f[i][k]+f[k+i][j-k]);
		}
	}
	for(int i=1;i<=n;i++)ans=max(ans,f[i][n]);
	cout<<ans;
	return 0;
}
