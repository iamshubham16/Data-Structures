#include<iostream>
using namespace std;

int main(){
	float p=1;
	int num=365;
	int d =365;
	int n=0;
	while(p>=0.5){
		p=p*(num/(1.0*d));
		num--;
		n++;
		cout<<"Probab is "<<p<<"  and "<<n<<"\n";
	}
	cout<<n;
	}
