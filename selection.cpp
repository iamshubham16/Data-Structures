#include<iostream>
using namespace std;

void selection(int a[],int n){
	int min_i,j;
	int i,min;
	for(i=0;i<n-1;++i){
		min_i=i;
		for(j=i+1;j<n;++j){
			if(a[min_i]>a[j])
				min_i=j;
		}
		int temp=a[min_i];
		a[min_i]=a[i];
		a[i]=a[min_i];
	}
}


int main(){
	int a[10]={14,89,11,8,2,5,1};
	int n=7;
	selection(a,7);
	for(int i=0;i<7;++i)
		cout<<a[i]<<" ";
	
}
