#include<bits/stdc++.h>
using namespace std;


bool issafe(int board[20][20],int r,int c, int n){
	for(int i=0;i<=r;++i){
		if(board[i][c]==1){
			return false;
		}
	}
	int x=r,y=c;
	while(x>=0&&y>=0){
		if(board[x][y]==1){
			return false;
		}
		x--;
		y--;
	}
 	x=r,y=c;
	while(x>=0&&y<n){
		if(board[x][y]==1){
			return false;
		}
		x--;
		y++;
	}
	return true;
}


bool solveNqueen(int n, int board[20][20],int row){
	if(row==n){
		//Print Board
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				cout<<board[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		return false;
	}
	//Try to place the queen in the current row and call for the next row which will be solved by recursion
	for(int col=0;col<n;++col){
		// If (row,col) safe to place queen or not
		if(issafe(board,row,col,n)){
			board[row][col]=1;
			
			bool solvehuakya = solveNqueen(n,board,row+1);
			if(solvehuakya){
				return true;
			} 	
			//If remaining board is not solved , then you have to erase the current queen
			//Backtracking
			board[row][col]=0;
		}
	} 
	
  //After trying all positions 	
  return false;
		
} 


int main(){
	int n;
	int board[20][20]={0};
	bool yo =solveNqueen(4,board,0);	
}
