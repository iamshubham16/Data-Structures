#include<bits/stdc++.h>
using namespace std;

void swap(char *x,char *y){
	char temp;
	temp=*x;
	*x=*y;
	*y=temp;
}


void permute(char *a,int l,int r){
	if (l==r){
		cout<<a<<"\n";
		return;
	}
	int i;
	for(i=l;i<=r;++i){
		swap((a+l),(a+i));
		permute(a,l+1,r);
		swap((a+l),(a+i));
	}
}


int main(){
	char a[]="ABC";
	int n = strlen(a);
	permute(a,0,n-1);
}
