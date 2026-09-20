#include <stdio.h>
#include <stdlib.h>




int main(){
int a;
int b;
scanf("%d %d",&b,&a);
int c[a][b];
for(size_t i=0;i<b;++i){
    for(size_t j=0;j<a;++j){
    scanf("%d",&c[j][i]);
}
}
int (*cptr)[a] = c;
for(size_t i=0;i<b;++i){
    for(int j=0;j<a;++j){
    printf("%d ",*(cptr+i)[j]);
}
}


printf("\n");
printf("\n");
}



