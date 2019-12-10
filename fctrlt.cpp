#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,g,s=0;
	cin>>t;
	int a[t],j;
	for(int i=0;i<t;i++){
		cin>>n;g=n;s=0;
		for(j=1;n/pow(5,j)!=0;j++){
			s+=n/pow(5,j);
		}
		a[i]=s;
	}
	for(int i=0;i<t;i++){
		cout<<a[i]<<endl;
	}
}
