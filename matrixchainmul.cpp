#include<iostream>
using namespace std;

int chain(int a[],int n){
	int m[n-1][n-1],p=n-1;
	for(int i=0;i<p;i++){
		m[i][i]=0;
	}
	for(int i=1;i<p;i++){
		for(int j=0;j<p-i;j++){
			int y=j+i;
			m[j][y]=INT_MAX;
			for(int k=j;k<=y-1;k++){
				int b=m[j][k]+m[k+1][y]+(a[j]*a[k+1]*a[y+1]);
				if(b<m[j][y]){
					m[j][y]=b;
				}
			}
		}
	}
	for(int u=0;u<p;u++){
		for(int t=0;t<p;t++){
			cout<<"["<<m[u][t]<<"]";
		}
		cout<<endl;
	}
	return m[0][p-1];
}
int main(){
	int i,j;
	cout<<"enter noof matrices";
	cin>>i;
	int a[i][2],b[i+1];
	cout<<"enter matrices sizes"<<endl;
	for(j=0;j<i;j++){
		cout<<"enter matrix no of rows and columns :";
		cin>>a[j][0];cin>>a[j][1];b[j]=a[j][0];
	}
	b[j]=a[j-1][1];
	for(j=0;j<i+1;j++){
		cout<<b[j]<<endl;
	}
	for(j=0;j<i-1;j++){
		if(a[j][1]!=a[j+1][0]){
			cout<<"incompatib"; return 0;
		}
	}
	//int b[]={5,4,6,2,7},i=5;
	int y=chain(b,i+1);
	cout<<y;
	return 0;
}
