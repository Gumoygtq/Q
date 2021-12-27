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
	int q=0;
	int s1=0;
	int s2=0;
	int p=0;
	
	for(int i=100;i<10000;i++){
		int a=isprime(i);
		q=q+a;
		p=i;
		for(;p>0;){
			int d=p%10;
			p=p/10;
			s1=s1+d;
		}
		int b=isprime(s1);
		q=q+b;
		p=i;
		for(;p>0;){
			int d=p%10;
			p=p/10;
			s2=s2+d*d;
		}
		int c=isprime(s2);
		q=q+c;
		if(q==3){
			printf("%d ",i);
		}
		q=0;
	}
	return 0;
}
