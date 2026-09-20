#include <stdio.h>

int main(){

    int w;
    int h;
    scanf("%d",&h);
    scanf("%d",&w);
    char maze[h][w];
    char temp;
    int starth;
    int startw;
    int position[2];
    int charval;
    char command;
    char dump;
    int sum = 0;
    char op = '+';
    int operator = 1;
    //1 add   2 subtract   3 multiply
    int tempnum = 0;
    int exit = 0;

    scanf("%c",&dump);
    for(int j= 0;j<h;++j){
        for(int i = 0;i<w;++i){
        scanf("%c",&maze[j][i]);
    }
    scanf("%c",&dump);
    }

    for(int i = 0;i<h;++i){
        for(int j = 0;j<w;++j){
        printf("%c",maze[i][j]);
    }
    printf("\n");
    }

    printf("\n");
    scanf("%d %d",&starth,&startw);
    scanf("%c",&dump);
    position[0] = starth;
    position[1] = startw;
    while(exit == 0){
        scanf("%c",&command);
        switch (command){
            case 'r':
                printf("command:r\n");
                position[1] =position[1]+1;
                break;
            case 'l':
                printf("command:l\n");
                position[1] =position[1]-1;
                break;
            case 'u':
                printf("command:u\n");
                position[0] =position[0]-1;
                break;
            case 'd':
                printf("command:d\n");
                position[0] =position[0]+1;
                break;
            case 'q':
                printf("command:q\n");
                exit = 1;
                break;
        }
        if(exit == 0){
        charval = maze[position[0]][position[1]];
        if(charval >47&&charval<58){

            switch (operator){
                case 1:
                    printf("%d %c %d = %d\n",sum,op,charval-48,sum+(charval-48));
                    sum+=(charval-48);
                    break;
                case 2:
                    printf("%d %c %d = %d\n",sum,op,charval-48,sum-(charval-48));
                    sum-=(charval-48);
                    break;
                case 3:
                    printf("%d %c %d = %d\n",sum,op,charval-48,sum*(charval-48));
                    sum*=(charval-48);
                    break;
            }
        }
        else if(charval == 91){
            position[1] =position[1]+1;
            charval = maze[position[0]][position[1]];
            while(charval!=93){

                tempnum = (tempnum*10)+(charval-48);
                position[1] =position[1]+1;
                charval = maze[position[0]][position[1]];
            }
            switch (operator){
                case 1:
                    printf("%d %c %d = %d\n",sum,op,tempnum,sum+tempnum);
                    sum+=(tempnum);
                    break;
                case 2:
                    printf("%d %c %d = %d\n",sum,op,tempnum,sum-tempnum);
                    sum-=(tempnum);
                    break;
                case 3:
                    printf("%d %c %d = %d\n",sum,op,tempnum,sum*tempnum);
                    sum*=(tempnum);
                    break;
            position[1] =position[1]+1;
        }
        tempnum = 0;
    }
    else if(charval == 93){
            position[1] =position[1]-1;
            charval = maze[position[0]][position[1]];
            while(charval!=91){
                tempnum = (tempnum*10)+(charval-48);
                position[1] =position[1]-1;
                charval = maze[position[0]][position[1]];
            }
            switch (operator){
                case 1:
                    printf("%d %c %d = %d\n",sum,op,tempnum,sum+tempnum);
                    sum+=(tempnum);
                    break;
                case 2:
                    printf("%d %c %d = %d\n",sum,op,tempnum,sum-tempnum);
                    sum-=(tempnum);
                    break;
                case 3:
                    printf("%d %c %d = %d\n",sum,op,tempnum,sum*tempnum);
                    sum*=(tempnum);
                    break;
        }
        tempnum = 0;
    }
    else if(charval == 42){
        printf("Operator changed to *\n");
        op = '*';
        operator = 3;
    }
    else if(charval == 45){
        printf("Operator changed to -\n");
        op = '-';
        operator = 2;
    }
    else if(charval == 43){
        printf("Operator changed to +\n");
        op = '+';
        operator = 1;
    }
    }

    }
    printf("Game is over. Your score is %d!\n",sum);





}






