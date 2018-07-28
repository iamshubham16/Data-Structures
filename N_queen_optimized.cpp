#include<bits/stdc++.h>
using namespace std;

int col[30]={0},d1[30]={0},d2[30]={0};

void solve(int r,int n,int &ans){
	if(r==n){
		ans++;
		return;
	}
	for(int c=0;c<n;++c){
		if(!col[c] && !d1[r-c+n-1] && !d2[r+c]){
			col[c]=d1[r-c+n-1]=d2[r+c] = 1;
			solve(r+1,n,ans);
			col[c]=d1[r-c+n-1]=d2[r+c]=0;
		}
	}
}

int main(){
	//int board[20][20]={0};
	int ans=0;
	solve(0,4,ans);
	cout<<ans;		
}
