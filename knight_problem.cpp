#include<iostream>
using namespace std;

bool hogya(int board[8][8]){
	for(int i=0;i<8;++i){
		for(int j=0;j<8;++j){
			if(board[i][j]==0)
				return false;
		}
	}
	return true;
}

bool inboard(int r,int c){
	return true;
	return r>=0&&r<8&&c>=0&&c<8;
}


bool solve(int x,int y,int board[8][8]){
	if(hogya(board)){
		for(int i=0;i<8;++i){
			for(int j=0;j<8;++j){
				cout<<board[i][j];
			}
		}
		return true;
	}

	if(inboard(x+1)){
        if(inboard(y-2)){
            if(solve(x+1,y-2,board)
			return true;
        }
        if(inboard(y+2)){
            if(solve(x+1,y+2,board)
			return true;
        }
    }
    
    if(inboard(x+2)){
        if(inboard(y-1)){
            if(solve(x+2,y-1,board))
			return true;
        }
        if(inboard(y+1)){
            if(solve(x+2,y+1,board))
			return true;
        }
    }
    
    if(inboard(x-1)){
        if(inboard(y-2)){
            if(solve(x-1,y-2,board))
			return true;
        }
        if(inboard(y+2)){
            if(solve(x-1,y+2,board))
			return true;
        }
    }
    
    if(inboard(x-2)){
        if(inboard(y-1)){
            if(solve(x-2,y-1,board))
			return true;
        }
        if(inboard(y+1)){
            if(solve(x-2,y+1,board))
			return true;
        }
    }
    
	return false;
}

int main(){
	int board[8][8]={0};
	solve(board,0,0);
}
