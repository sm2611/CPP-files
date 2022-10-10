#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	     int n,k;
	     cin>>n>>k;
	     int sumk=0,sumc=0,sum=0;
	     vector<int> v;
	     for(int i=0;i<n;i++){
	          int x;
	          cin>>x;
	          sum+=x;
	          v.push_back(x);
	     }
	     sort(v.begin(),v.end());
	     int z=min(k,n-k);
	     for(int i=0;i<z;i++){
	          sumk+=v[i];
	     }
	     int y=(sum-sumk)-sumk;
	     cout<<y<<"\n";
	     
	}
	return 0;
}
