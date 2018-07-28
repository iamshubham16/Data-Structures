#include<iostream>
using namespace std;

int findmin(int a[],int s,int n){
	int mini=INT_MAX,mi;
	for (int i=s;i<=n;++i){
        //cout<<a[i]<<" ";
		if(a[i]<mini){
			mini=a[i];
			mi=i;
		}
		//cout<<mini <<" ";
	}
	//cout<<"\n ";
	return mi;
}

void selection(int a[],int n,int i=0){
	if(i==n)
		return;
	int min =findmin(a,i,n-1);
	if(min!=i){
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
	selection(a,n,i+1);
	
}

int main(){
	int a[]={1,4,2,5,2,6,8,3,7};
	selection(a,9);
	for(int i=0;i<9;++i)
		cout<<a[i]<<" ";


}
