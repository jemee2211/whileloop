#include<stdio.h>
main(){
	
	int a=1;
	int n;
	
	printf("Enter Value :");
	scanf("%d",&n);
	
	while(a<=10){
		printf("%d * %d = %d\n",n,a,n*a);
		a++;
	}
	
	
}
