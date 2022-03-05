#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;

 main(){
	int no;
	float pt;
	cout<<"enter the no of data points";
	cin>>no;
	cout<<"enter the point to be claculated";
	cin>>pt;
	float x[no],f[no];
	cout<<"enter the data points and their functional value";
	for (int i=0;i<no;i++){
		cin>>x[i]>>f[i];
		
	}
	float s=0;
	for(int i=0;i<no;i++){
		float l=1;
		
		for(int j=0;j<no;j++){
			
			if(i!=j){
				float a=(pt-x[j]);
				float b=x[i]-x[j];
				l=l*(a/b);
				
			}
		
			
		}
			s=s+(l*f[i]);
		
	}
	cout<<s;
	getch();
}
