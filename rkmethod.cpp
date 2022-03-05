#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
float f(float a,float b){
	return a*a+b*b;
}
int main(){
	float m1,m2,m3,m4;
	float h=0.2;
	float n=0.4/h;
	float val;
	float x=0;
	float y=0;
	for(int i=0;i<n;i++){
		m1=f(x,y);
		m2=f(x+h/2,y+(m1*h)/2);
		m3=f(x+h/2,y+(m2*h)/2);
		m4=f(x+h,y+m3*h);
		y=y+(m1+2*m2+2*m3+m4)*(h/6);
		x=x+h;
	}
	//y=y+(m1+2*m2+2*m3+m4)*(h/6);
	cout<<y;
	getch();
}
