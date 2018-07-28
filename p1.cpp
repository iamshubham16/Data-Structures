#include<iostream>
using namespace std;

void play(long long int a[1000],long long int s,long long int e,long long int &ans,long long int p){
	if(s>e){
		cout<<ans;
		return;
	}
	if(a[s]>=a[e]){
		if(a[s+1]+a[e-1]<=a[s]+a[e]){	
		if(p==1){
		   ans+=a[s];
		   p=0;}
		 else{
		 	p=1;
		 }  
		s++;
	}
	else{
		if(p==1){
		ans+=a[e];
		p=0;}
		else{
			p=1;
		}
	
		e--;
		
	}
	}
	else{
	if(a[s+1]+a[e-1]<=a[s]+a[e]){
		if(p==1){
		ans+=a[e];
		p=0;}
		else{
			p=1;
		}
	
		e--;
		
	}
	else{
		if(p==1){
		   ans+=a[s];
		   p=0;}
		 else{
		 	p=1;
		 }  
		s++;
		
	}
	}
	
play(a,s,e,ans,p);
}



int main(){
	long long int n;
	cin>>n;
	long long int ans=0;
	long long int a[n],i,j;
	for(i=0;i<n;++i){
			cin>>a[i];
		
	}
	if(n==1){
	    cout<<a[0];
	}
	else
	play(a,0,n-1,ans,1);
}
