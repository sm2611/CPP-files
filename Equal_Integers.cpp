#include <bits/stdc++.h>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	    int x,y;
	    cin>>x>>y;
	    int ans=y-x;
	    if(x>y){
	        if((x-y)%2==0){
	            ans=(x-y)/2;
	        }
	        else{
	            ans=2+(x-y)/2;
	        }
	    }
	    cout<<ans<<"\n";
	}
	return 0;
}
