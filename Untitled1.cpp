#include<bits/stdc++.h>
using namespace std;
int pr(int n){
	int m=sqrt(n);
	if(m*m==n){
		return 1;
	}
	else{
		return 0;
	}
	//return m;
}
int mr(int n){
	if(n%4==0 and n%6==0){
		return 1;
	}
	else{
		return 0;
	}
}
int nr(int n){
	if(n%2==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int brr[n];
	int crr[n];
	int drr[n];
	int err[n];
	int j=pr(n);
	cout<<j;
	int h=0;
	int g=0;
	int f=0;
	int p=0;
	for(int i=0; i<n; i++){
		int x=pr(arr[i]);
		int y=mr(arr[i]);
		int z=nr(arr[i]);
		if(x==1 and y==1 and z==1 ){
			brr[h]=arr[i];
			h=h+1;
		}
		else if((x==1 and y==1 and z!=1) or (x==1 and z==1 and y!=1) or (z==1 and y==1 and x!=1)){
			crr[g]=arr[i];
			g=g+1;
		}
		else if((x==1 and y!=1 and z!=1) or (y==1 and z!=1 and x!=1) or (z==1 and x!=1 and y!=1)){
			drr[f]=arr[i];
			f=f+1;
		}
		else{
			err[p]=arr[i];
			p=p+1;
		}
		
	}
	//int a1=brr.length
	sort(brr,brr+n);
	sort(crr,crr+n);
	sort(drr,drr+n);
	sort(err,err+n);
	for(int i=0; i<n; i++){
		cout<<brr[i];
	}
	
	return 0;
}
