#include <stdio.h>

void grades(int class[],int avg,int sD,int nclass, int *ffnum, int *aanum,int *othernum);

int avg(int class[],int size);

int *lettercalc(int class[],int size);

int main(){

    int asize = 0;
    int bsize = 0;
    
    int sdevi = 10;
    int aavg;
    int bavg;

    int aanum = 0;
    int ffnum = 0;
    int othernum = 0;
    scanf("%d",&asize);
    scanf("%d",&bsize);
    int aclass[asize];
    int bclass[bsize];

    for(size_t i = 0;i<asize;++i){
        scanf("%d",&aclass[i]);
    }
    for(size_t i = 0;i<bsize;++i){
        scanf("%d",&bclass[i]);
    }
    aavg = avg(aclass,asize);
    bavg = avg(bclass,bsize);
    grades(aclass,aavg,sdevi,asize,&ffnum, &aanum,&othernum);
    grades(bclass,bavg,sdevi,bsize,&ffnum, &aanum,&othernum);

    printf("The number of AAs: %d \n",aanum);
    printf("The number of other grades: %d \n",othernum);
    printf("The number of FFs: %d \n",ffnum);
    if(aavg<bavg){
    printf("Class A is better than Class B\n");
    }
    else{
    printf("Class B is better than Class A\n");
    }

}
void grades(int class[],int avg,int sD,int nclass, int *ffnum, int *aanum,int *othernum){
    for(size_t i = 0;i<nclass;++i){
        int bellvalue = 10*((class[i]-avg)/sD)+50;
        if(bellvalue>=90){
            *aanum = (*aanum)+1;
        }
        else if(bellvalue<40){
            *ffnum = (*ffnum)+1;
        }
        else if(bellvalue<90&&bellvalue>=40){
            *othernum = (*othernum) +1;
        }
    }
}

int avg(int class[],int size){
    int sum = 0;
    for(size_t i = 0;i<size;++i){
        sum+=class[i];
    }
    return (sum/size);
}
