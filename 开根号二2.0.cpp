#include <stdio.h>
int main()
{
	float x,a,b;
	x=1;
    for(int i=0;i<30;i++){
		if(x*x>2){
			b=x;
			x=(x+a)/2;
		}
		else{
			a=x;
			x=(x+b)/2;
		}
	}
	printf("sqrt2=%f",x);
	return 0;
 } 
