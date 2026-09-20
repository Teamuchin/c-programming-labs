#include <stdio.h>


int main(){

    int a = 0;
    int c = 0;
    int sum = 0;
    int multiplier = 10;
    int m2 = 1;
    scanf("%d",&a);
    if(a==10){
    while(scanf("%c",&c)!=EOF){
    if (c !=45 && c !=10){
    sum+= ((c-48)*multiplier);
    multiplier-=1;
    }
    }
    if(sum%11 == 0){
    printf("The sum is %d. This is ISBN \n",sum);
    }else{
    printf("The sum is %d. This is not ISBN \n",sum);
    }
    }
    else if (a ==13){
    while(scanf("%c",&c)!=EOF){
    if (c !=45&& c!=10){
    sum+= ((c-48)*m2);
    if(m2 == 1){
    m2 = 3;
    }else{
    m2 = 1;
    }
    }
    }
    if(sum%10 == 0){
    printf("The sum is %d. This is ISBN \n",sum);
    }else{
    printf("The sum is %d. This is not ISBN \n",sum);
    }
    }

}
