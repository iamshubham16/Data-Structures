#include<iostream>
using namespace std;

void filterchars(int no, char *a){
	
	int i=0;
	while(no>0){
		if(no&1){
			cout<<a[i];
		}
		i++;
		no=no>>1;
	}
	
}

void print_subsequences(char *a,int l){
	
	for(int i=0;i<(1<<l);++i){
		filterchars(i,a);
		cout<<"\n";
	}
}

int main(){
	print_subsequences("abc",3);
}
