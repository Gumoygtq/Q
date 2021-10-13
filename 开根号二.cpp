#include <stdio.h>
int main()
{
	float x,i,a,b;
	a=1;
	b=2;
	x=1.5;
	while(i<20){
		if(x*x>2){
			b=x;
			x=(x+a)/2;
			i++;
		}
		else{
			a=x;
			x=(x+b)/2;
			i++;
		}
	} 
	printf("sqrt2=%f",x);
	return 0; 
	
 } 
