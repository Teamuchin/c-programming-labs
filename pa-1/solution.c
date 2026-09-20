#include <stdio.h>


int main(){
    int a;
    float b;
    float c = 0;
    float d;
    float d1;
    char e;
    int e1 = 1;
    printf("****************Online Shopping*****************\n1- Apple	5$\n2- Orange	7$\n3- Tomate	9$\n4- Meat   	50$\n5- Chicken	25$\n6- Milk   	2.5$\n7- Yoghurt	4.2$\n8- Egg   	1.1$\n9- Lemonate	1.9$\n10-Coke  	2.3$\n************************************************\n");
    printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
    scanf("%d",&a);
    while(e1 != 0){
    switch (a){
        case 1:
            scanf("%f",&b);
            printf(" %.2f kg Apple: %.2f$\n",b,b*5);
            c+=(b*5);
            printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
            scanf("%d",&a);
            break;
        case 2:
            scanf("%f",&b);
            printf(" %.2f kg Orange: %.2f$\n",b,b*7);
            c+=(b*7);
            printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
            scanf("%d",&a);
            break;
        case 3:
            scanf("%f",&b);
            printf(" %.2f kg Tomate: %.2f$\n",b,b*9);
            c+=(b*9);
            printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
            scanf("%d",&a);
            break;
        case 4:
            scanf("%f",&b);
            printf(" %.2f kg Meat: %.2f$\n",b,b*50);
            c+=(b*50);
            printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
            scanf("%d",&a);
            break;
        case 5:
            scanf("%f",&b);
            printf(" %.2f kg Chicken: %.2f$\n",b,b*25);
            c+=(b*25);
            printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
            scanf("%d",&a);
            break;
        case 6:
            scanf("%f",&b);
            printf(" %.2f lt Milk: %.2f$\n",b,b*2.5);
            c+=(b*2.5);
            printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
            scanf("%d",&a);
            break;
        case 7:
            scanf("%f",&b);
            printf(" %.2f kg Yoghurt: %.2f$\n",b,b*4.2);
            c+=(b*4.2);
            printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
            scanf("%d",&a);
            break;
        case 8:
            scanf("%f",&b);
            printf(" %.2f Egg: %.2f$\n",b,b*1.1);
            c+=(b*1.1);
            printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
            scanf("%d",&a);
            break;
        case 9:
            scanf("%f",&b);
            printf(" %.2f lt Lemonate: %.2f$\n",b,b*1.9);
            c+=(b*1.9);
            printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
            scanf("%d",&a);
            break;
        case 10:
            scanf("%f",&b);
            printf(" %.2f lt Coke: %.2f$\n",b,b*2.3);
            c+=(b*2.3);
            printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
            scanf("%d",&a);
            break;
        case 0:
            printf(" Are you sure (y/n) : ");
            scanf("%c",&e);
            scanf("%c",&e);
            if(e == 'n')
            {
            printf("n\n");
            printf("Please enter your choice and quantity(Enter '0' for exit, '-1' for total price):");
            scanf("%d",&a);
            }else if (e == 'y'){
                printf("y");
                e1 = 0;
            }
            break;
        case (-1):
            printf(" -1\n");
            printf("Your total price is %.2f$. How much money you enter: ",c);
            scanf("%f",&d);
            printf("%.2f$\n",d);
            while(d<c)
            {
            printf("Your money is not enough. You must add %.2f$ for total price. How much money you enter: ",c-d);
            scanf("%f",&d1);
            printf("%.2f$\n",d1);
            d+=d1;
            }
            printf("Total price has been paid. Your remaining money %.2f$. ",d-c);
            e1 = 0;
            break;
    }
    }
    printf("\nHave a good day...\n");
}
