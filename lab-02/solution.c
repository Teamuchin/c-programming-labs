#include <stdio.h>


int main(){
	
	int b;
	int n1=0;
	int n2=1;
	int n3= n1+n2;
	scanf("%d",&b);
	if (b == 0){
	printf("Error\n");
	}
	else{
	for(int a = 1;a<=b;++a){
	for(int i = 1;i<=a;++i){
	printf("* ");
	}
	if (a == 1){
	printf("0\n");
	}else{
	printf("%d",n3);
	printf("\n");
	n3= n1+n2;
	n1 = n2;
	n2 = n3;
	}
	
	}
	printf("%d",b);
	printf(". element is ");
	printf("%d",n1);
	printf("\n");
	}

}
