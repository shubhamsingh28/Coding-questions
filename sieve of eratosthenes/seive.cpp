#include<bits/stdc++.h>
using namespace std;
int main(){
	//sieve of eratosthenes
	int n;
	cin>>n;
	bool p[n+1];
	for(int i=0;i<=n;i++){
		p[i]=true;
	}
	p[2]=true;
	for(int i=2;i*i<=n;i++){
		if(p[i]){
			for(int j=2*i;j<=n;j+=i){
				p[j]=false;
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(p[i]){
			cout<<i<<endl;
		}
	}
	return 0;
}
