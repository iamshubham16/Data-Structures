#include<bits/stdc++.h>
using namespace std;

void bubble(int a[],int n){
	bool swapp=false;
	int i,j;
	for(i=0;i<n-1;++i){
		swapp=false;
		for(j=0;j<n-i-1;++j){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				swapp=true;
			}
			
		}
		if(swapp==false)
				break;
	}
	for(int i=0;i<11;++i)
		cout<<a[i]<<" ";
}

int main(){
	int a[11]={2,4,1,4,2,0,11,24,23,1,989};
	bubble(a,11);
	
}
