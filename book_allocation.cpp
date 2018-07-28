#include<iostream>
using namespace std;
#define ll long long int

bool isvalid(ll book[],ll k,ll mid,int x){
	int s=1;
	ll c=0;
	int n=x;
	for(int i=0;i<n;++i){
		if(c+book[i]<=mid){
			c+=book[i];
		}
		else{
			s++;
			c=book[i];
			if(s>k)
				return false;
	
		}
	}
		
	return true;
}


int book_alloc(ll book[],ll n,ll k){
	ll s=0,e=0,ans;
	for(int i=0;i<n;++i){
		//cout<<book[i]<<" ";
		e+=book[i];
		s=max(s,book[i]);
	}
	//cout<<s<<" "<<e;
	while(s<=e){
		int mid = (s+e)/2;
		if(isvalid(book,k,mid,n)){
			//True
			ans=mid;
			e=mid-1;
		}
		else{
			s=mid+1;
		}
		
}
return ans;
}


int main(){
	ll n,m,book[100005];
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>book[i];
	}
	cout<<book_alloc(book,n,m);
	
}
