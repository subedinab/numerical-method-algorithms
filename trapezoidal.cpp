#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
float func(float a){
	return pow(a,3)+1;
}
int main(){
	float sum;
	float upper=2;
	float lower=1;
	float h=0.5;
	float n;
	n=(upper-lower)/h;
	sum=(func(upper)+func(lower))/2;
	for(int i=1;i<n-1;i++){
		sum=sum+func(lower+i*h);
	}
	cout<<"the result is "<<sum*h;
	getch();
	return 0;
	
	
}
