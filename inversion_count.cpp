#include<iostream>
using namespace std;


int count(int a[],int l,int r){
	int i, j, k;
    int mid=(l+r)/2;
    i = l; 
    j = mid+1; 
    k = l;
    int temp[1000];
    int invs=0;
	while (i <=mid && j <= r)
    {
        if (a[i] <= a[j])
        {
            temp[k++] = a[i++];
            //i++;
        }
        else
        {
            temp[k++] = a[j++];
            invs +=(mid-i+1);
        }
        
    }
 
    while (i <= mid)
    {
        temp[k++] = a[i++];
    }
   while (j <= r)
    {
        temp[k++] = a[j++];
        
    } 
  return invs;
}

int inversion_count(int a[],int l,int r){
	
	if(l>=r){
		return 0;
	}
		
	int mid=(l+r)/2;
	int ans = inversion_count(a,l,mid)+inversion_count(a,mid+1,r)+count(a,l,r);
	return ans;
}

int main(){
	int a[]={5,3,1,2};
	cout<<inversion_count(a,0,3);
	//cout<<c;	
}
