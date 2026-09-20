#include <stdio.h>
#include <string.h>

#define SIZE 101

int main(){

    char stringarray[SIZE][15];
    char stringcmparray[SIZE][15];
    int pricearray[SIZE];
    int i = 0;
    scanf("%s", stringarray[i]);
    while(strcmp(stringarray[i],"start") != 0){
        scanf("%d",&pricearray[i]);
        ++i;
        scanf("%s", stringarray[i]);
    }
    i = 0;
    scanf("%s", stringcmparray[i]);
    while(strcmp(stringcmparray[i],"end") != 0){
        ++i;
        scanf("%s", stringcmparray[i]);
    }
    int n = 0;
    int k = 0;
    int check = 0;
    while(strcmp(stringcmparray[n],"end") != 0){
        k = 0;
        check = 0;
        while(strcmp(stringarray[k],"start") != 0){
            if(strcasecmp(stringarray[k],stringcmparray[n]) == 0){
            check = 1;
            printf("%s %d\n",stringarray[k],pricearray[k]);
            }

            ++k;
        }
        if(check == 0){
            printf("%s 0\n",stringcmparray[n]);
        }
        ++n;
    }
}
