#include<iostream>
#include<conio.h>
#include<math.h>
// the equation is a*a-4a-10
using namespace std;
float f(float a){
	return a*a-4*a-10;
}
int main(){
	float a1,a2;
	float f1;
	do{
		cout<<"enter two initial guesses\n";
		cin>>a1>>a2;
		f1=f(a1)*f(a2);
		
	}while(f1>0);
	float a3;
	while(abs(a1-a2)>0.001){
		a3=(a1+a2)/2;
		if(f(a1)*f(a3)<0){
			a2=a3;
		}
		else{
			a1=a3;
		}
		
	}
	cout<<"the solution is "<<a3;
}
