#include<iostream>
using namespace std;

int find(int a[],int l,int r,int x){
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x){
			return mid;
		}
		if(a[mid]<x){
			if(a[mid]<a[mid-1]){
				if(x>=a[l]){
					if(x==l)
						return l;
					r=mid-1;
				}
				if(x>=a[mid]){
					l=mid;
				}
			}
			if(a[mid]>a[mid-1]&&a[mid]>a[mid+1]){
				if(x>=a[l]){
					r=mid-1;
				}
				if(x>a[mid]){
					l=mid;
				}
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	int a[n],i;
	for(i=0;i<n;++i){
		cin>>a[i];
	}
}
