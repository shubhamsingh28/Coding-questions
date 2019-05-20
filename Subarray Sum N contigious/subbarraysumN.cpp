#include <iostream>
using namespace std;

int main() {
	//code
	int n,k;
	cin>>n>>k;
	long long int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	int i=0;
	int last=0;
	int start=0;
	int sum=0;
	for(int i=0;i<n;i++){
		sum += a[i];
		if(sum>=k){
			last=i;
			while(sum<k&& start<last){
				sum-=a[start];
				start++;
			}
			if(sum==k){
				cout<<start<<" "<<last<<endl;
			}
		}
	}
	return 0;
}
