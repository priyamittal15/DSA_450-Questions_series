#include<iostream>
using namespace std;
int main(void)
{
	int n;
	cin>>n;
	int a[n],b[n],c[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<0){
			b[i]=a[i];
		}
		else{
			c[i]=a[i];
		}
	}
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
		cout<<"\n";
		cout<<c[i]<<" ";
	}
}
