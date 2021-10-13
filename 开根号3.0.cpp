#include <stdio.h>
int main()
{
	float target;
	printf("enter target:");
	scanf("%f",&target);
	float a,b,c,i;
    a=0;
    b=target;
    c=target;
    target=target/2;
    for(int i=0;i<30;i++){
    	if(target*target>c){
    		b=target;
    		target=(target+a)/2;
		}
		else{
			a=target;
			target=(target+b)/2;
		}}
		printf("sqrt %f =%f",c,target);
		return 0;
    
 } 
