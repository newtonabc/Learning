#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[]={1,1,2,2,2,3,4,4,4,4,5,6};
	int fd=2;
	int l=0,r=11;
	while(l<r){
		int mid=(l+r+1)/2;
		if(fd>=mid) l=mid;
		else r=mid-1;
	}
	cout<<l;
}
