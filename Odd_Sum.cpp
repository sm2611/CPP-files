#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long long int tc;
	cin>>tc;
	while(tc--){
	     long long int n,x;
	     cin>>n;
	     if(n==1 || n==2){
	          cout<<1<<"\n";
	     }
	     else{
	          x=((n-2)*(n-1))+1;
	          cout<<x<<"\n";
	     }
	     
	}
	return 0;
}
