//largest subsequence of an array of integers(positive/negative)
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a[n];
	int flag=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>0){
			flag=1;
		}
	}
	if(flag==0){
		cout<<max_element(a,a+n);
		return 0;
	}
	int sum=0;
	int ans=0;
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum<0){
			sum=0;
		}
		if(sum>ans){
			ans=sum;
		}
	}
	cout<<ans<<endl;
	return 0;
}
