#include<iostream>
using namespace std;

void bubble(int a[],int n){
	if(n==1){
		return;
	}
	for(int i=0;i<n-1;++i){
		if(a[i]>a[i+1]){
			int temp = a[i];
			a[i] = a[i+1];
			a[i+1]=temp;
		}
	}
	bubble(a,n-1);
}

int main(){
	int a[11]={2,4,1,4,2,0,11,24,23,1,989};
	bubble(a,11);
	for(int i=0;i<11;++i)
		cout<<a[i]<<" ";
}
