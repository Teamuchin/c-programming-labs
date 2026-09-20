#include <stdio.h>

int main(){
	int a = 0;
	int b = 0;
	int inputsize;
	int input;
	scanf("%d",&inputsize);
	scanf("%d",&input);
	a = input;
	b = input;
	for(int i = 0;i<=(inputsize-1);++i){
	scanf("%d",&input);
	    if (input<a){
		a = input;
	    }
	    if (input>b){
	    	b = input;
	    }
	}
	printf("The largest point is %d\n",b);
	printf("The smallest point is %d\n",a);
	printf("The difference is %d\n",b-a);
}
