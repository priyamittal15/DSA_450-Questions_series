#include<bits/stdc++.h>
using namespace std;
int main(void)
{
   int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		}
		
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]<a[j]){
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
   int k;
   cin>>k;
   if(k<n){
   	cout<<"max kth element: "<<a[k]<<"\n";
   }
   else{
   	cout<<"error put correct value of k";
   }
   
}

