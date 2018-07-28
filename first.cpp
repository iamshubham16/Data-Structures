#include<iostream>
using namespace std;

int find(int a[10],int l,int r, int x){
	int ans;
	while(l<=r){
		int mid=l+(r-1)/2;
		if(a[mid]==x){
			ans = mid;
			l=mid+1;	
		}
		else if(a[mid]<x){
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	return ans;
	
	
}


int main(){
	int a[10]={1,1,1,1,5,6,7};
	int n=8;
	cout<<find(a,0,n,1);
}
