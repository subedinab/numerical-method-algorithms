#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
main(){
	int n;
	float c;
	float sum;
	cout<<"enter the value of n";
	cin>>n;
	float a[n][n+1];
	float x[n];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=(n+1);j++){
			cin>>a[i][j];
		}
	}
	for (int j=1;j<=n;j++){
		for(int i=1;i<=n;i++){
			if(i>j){
				c=a[i][j]/a[j][j];
			}
			for(int k=1;k<=(n+1);k++){
				a[i][k]=a[i][k]-c*a[j][k];
			}
		}
	}
	x[n]=(a[n][n+1])/a[n][n];
	for(int i=n-1;i>=1;i--){
		sum=0;
		for(int j=i+1;j<=n;j++){
			sum=sum+a[i][j]*x[j];
			
		}
		x[i]=(a[i][n+1]-sum)/a[i][i];
	}
	for(int i=1;i<=n;i++){
		cout<<x[i]<<endl;
	}
	getch();
}
