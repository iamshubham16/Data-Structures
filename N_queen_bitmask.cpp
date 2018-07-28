#include<bits/stdc++.h>
using namespace std;

int n;
int ans=0,done;


void solve(int rowmask, int ld, int rd,int i,int board[20][20]){
	if(rowmask==done){
		for(int k=0;k<n;++k){
			for(int j=0;j<n;++j){
				cout<<board[k][j]<<" ";
			}
			cout<<"\n";
		}
		ans++;
		return;
	}
	int safe = done & (~(rowmask|ld|rd));
	while(safe){
		int p = safe &(-safe);
		int c = n-log2(p)-1;
		board[i][c]=1;
		safe = safe -p;
		solve(rowmask|p,(ld|p)<<1,(rd|p)>>1,i+1,board);
		board[i][c]=0;
	}
}


int main(){
	
	cin>>n;
	int board[20][20]={0};
	done  = (1<<n)-1;
	//cout<<done;
	solve(0,0,0,0,board);
	cout<<ans;
}
