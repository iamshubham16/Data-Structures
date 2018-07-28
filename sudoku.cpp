#include<bits/stdc++.h>
using namespace std;


bool issafe(int board[9][9],int r,int c,int n,int no){
	
	for(int i=0;i<9;++i){
		if(board[i][c]==no){
			return false;
		}
	}
	for(int i=0;i<9;++i){
		if(board[r][i]==no){
			return false;
		}
	}
	int x=r,y=c;
	int bx=x-x%3;
	int by=y-y%3;
	
	int l=sqrt(n);
	for(int i=0;i<l;++i){
		for(int j=0;j<l;++j){
			if(board[i+bx][j+by]==no){
				return false;
			}
		}
	}
	return true;
	
}


bool done(int board[9][9]){
	int i,j;
	for(i=0;i<9;++i){
		for(j=0;j<9;++j){
			if(board[i][j]==0){
				return false;
			}
		}
	}
	return true;
}


bool iszero(int board[9][9],int &row,int &col,int n){
	for(row=0;row<n;++row){
		for(col=0;col<n;++col){
			if(board[row][col]==0)
				return true;
		}
	}
	return false;
}

bool solve (int n,int board[9][9],int row,int col){
	if(!iszero(board,row,col,n)){
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				cout<<board[i][j]<<" ";
			}
			cout<<"\n";
		}
		return true;
	}
	for(int i=1;i<=9;++i){
		if(issafe(board,row,col,n,i)){
			
			board[row][col]=i;
			bool huakya = solve(n,board,row,col);
			if(huakya){
				return true;
			}
			board[row][col]=0;
		}
	}
	return false;
	
}

int main(){
	int N=9;
	int board[9][9] = {{3, 0, 6, 5, 0, 8, 4, 0, 0},
                       {5, 2, 0, 0, 0, 0, 0, 0, 0},
                       {0, 8, 7, 0, 0, 0, 0, 3, 1},
                       {0, 0, 3, 0, 1, 0, 0, 8, 0},
                       {9, 0, 0, 8, 6, 3, 0, 0, 5},
                       {0, 5, 0, 0, 9, 0, 6, 0, 0},
                       {1, 3, 0, 0, 0, 0, 2, 5, 0},
                       {0, 0, 0, 0, 0, 0, 0, 7, 4},
                       {0, 0, 5, 2, 0, 6, 3, 0, 0}};
                                       
	 solve(N,board,0,0);				  
	
}

