#include<stdio.h>

void pointer(int *aptr, int sizeofarray, int *p1, int *p2){

	*p2 = *aptr;
	*p1 = *(aptr+sizeofarray-1);
}

void sortTheArray(int *aptr, int sizeofarray){
	int tempnum;
	for(int i = 1;i<sizeofarray;++i){
		if(*(aptr+i-1)>*(aptr+i)){
			tempnum = *(aptr+i-1);
			*(aptr+i-1) = *(aptr+i);
			*(aptr+i) = tempnum;
			i = 0;
		}
	}

}

int main(){
	int p1, p2;			
	int asize;
	scanf("%d",&asize);
	int array1[asize];
	for(size_t i = 0;i<asize;++i){
		scanf("%d ",&array1[i]);
	}
	printf("Original Array= ");
	for(size_t i = 0;i<asize;++i){
		printf("%d ",array1[i]);
	}
	printf("\n");
	int *arrayptr1 = array1;
	sortTheArray(arrayptr1, asize);
	pointer(arrayptr1, asize, &p1, &p2);
	

	printf("*p1= %d\n",p1);	
	printf("*p2= %d\n",p2);	
	printf("Sorted Array= ");
	for(size_t i = 0;i<asize;++i){
		printf("%d ",array1[i]);
	}
	printf("\n");

}
