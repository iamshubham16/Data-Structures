#include<iostream>
using namespace std;

void inc(int n){
	if(n==0){
		return;
	}
	

	inc(n-1);
		cout<<n<<" ";
}

void dec(int n){
	if(n==1){
		cout<<n<<" ";
		return;
	}
	cout<<n<<" ";
	dec(n-1);
}

int main(){
	inc(10);
	cout<<"\n";
	dec(10);
}
