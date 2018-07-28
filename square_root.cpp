#include<iostream>
using namespace std;

float square_root(int x,int p=3){
	int ans,l=0,r=x;
	while(l<=r){
		int mid=(l+r)/2;
		//cout<<mid;
		if(mid*mid==x){
			ans= mid;
			return ans;
		}
		else if(mid*mid<x){
			l=mid+1;
			ans=mid;
		}
		else
		{
			r=mid-1;
		}
		//cout<<ans;
	}
	float root=ans,inc=0.1;
	for(int place =1;place<=p;place++){
	while(root*root <=x){
		root+=inc;
	}
	root-=inc;
	inc=inc/10;
}
	return root;
}


int main(){
	int n;
	cin>>n;
	cout<<square_root(n);
}
