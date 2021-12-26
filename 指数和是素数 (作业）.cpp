#include <stdio.h>
#include <math.h>
int isprime(long long int n)
{
	int ret=1;
	for(int i=2;i<n;i++){
		if(n%i==0){
			ret=0;
			break;
			
		}
	}
	return ret;
	
 } 

int main(){
	int p=3;
	int q=2;
	long long int a,b;
	int s=0;
	int s1=0;
	int s2=0;
	for(p=3;p<300;p++){
		for(q=2;q<p;q++){
			s1=isprime(p);
			s2=isprime(q);
			if(s1==1 && s2==1){
			
			a=pow(p,q);
			b=pow(q,p);

			s=isprime(a+b);
			if(s==1){
				printf("%d %d\n",p,q);
			}}
		}
	}
	return 0;
}
