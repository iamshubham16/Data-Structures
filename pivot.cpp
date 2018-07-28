 #include<iostream>
using namespace std;

int find_pivot(int a[],int l,int r){
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]<a[mid-1]){
			return (mid-1);
		}
		if(a[mid]>a[mid-1]&&a[mid]>a[mid+1]){
			return mid;
		}
		if(a[mid]>a[mid-1]){
			if(a[l]<a[mid-1]){
				l=mid+1;
			}
			if(a[r]<a[mid+1]){
				r=mid-1;
			}
		}	
	}
}


int main(){
	int n;
	cin>>n;
	int a[n],i;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	cout<<find_pivot(a,0,n)<<" ";
}
