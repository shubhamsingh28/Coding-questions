#include <bits/stdc++.h>
using namespace std;

int gcd (int a,int b){
	if(b==0){
		return a;
	}
	return gcd(b,a%b);
}

int main() {
	//code
	int n,m;
	cin>>n>>m;
	cout<<"gcd "<<gcd(n,m)<<endl;
	cout<<"Factors of a number "<<n<<endl;
	set<int>s;
	for(int i=1;i*i<=n;i++){
		if(n%i==0){
			s.insert(i);
			s.insert(n/i);
		}
	}
	for(set<int>::iterator it=s.begin();it!=s.end();it++){
		cout<<*it<<endl;
	}
	
	return 0;
}
