#include <iostream>
using namespace std;

int main() {
	int tc;
	cin>>tc;
	while(tc--){
	     int n;
	     cin>>n;
	     int arr[n],mini=10000,sum=0;
	     for(int i=0;i<n;i++){
	          cin>>arr[i];
	          sum+=arr[i];
	         // min=a[0];
	          if(arr[i]<mini){
	               mini=arr[i];
	          }
	     }
	     cout<<sum-(n*mini)<<endl;
	}
	return 0;
}
