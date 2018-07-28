#include<iostream>
using namespace std;

int n=4;


bool issafe(int maze[4][4],int sol[4][4],int r, int c){
	if(r>=0&&r<n&&c>=0&&c<n&&maze[r][c]==1)
		return true;
		
		return false;
}

bool solve(int maze[4][4],int sol[4][4],int r, int c){
	if(r==n-1&&c==n-1){
		sol[r][c]=1;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				cout<<maze[i][j]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n\n\n";
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				cout<<sol[i][j]<<" ";
			}
			cout<<"\n";
		}
	}
	if(issafe(maze,sol,r,c)){
		sol[r][c]=1;
		bool huakyarow = solve(maze,sol,r+1,c);
		if(huakyarow){
			return true;
		} 
		bool huakyacol = solve(maze,sol,r,c+1);
		if(huakyacol){
			return true;
		}
		sol[r][c]=0;
	}
	return false;
}




int main(){
	int maze[4][4]  =  { {1, 0, 0, 0},
        				 {1, 1, 0, 1},
        				 {0, 1, 0, 0},
        				 {1, 1, 1, 1}
    								};
    int sol[4][4]={0};
	solve(maze,sol,0,0);								
}



