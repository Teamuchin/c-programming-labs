#include <stdio.h>

int maxfind(int *listptr,int teamnum);
int minfind(int *listptr,int teamnum);

int main(){
char teamnames[100][50];
char teamnames2[100][50];
int teammatch[100];
int teamscore[100];
int teamscoretemp[100];
int teammaxscore[100];
int maxs;
int maxsval;
int mins;
int minsval;
int i = 0;
int i2 = 0;
int spacecheck = 0;
int breaker = 0;

while(scanf("%[^\t]s",teamnames[i])!=EOF){
scanf("%d",&teammatch[i]);
scanf("%d",&teamscore[i]);
++i;
}
i2 = 2*(i-2);


for(int j = 0;j<i-1;++j){
teammaxscore[j]=teamscore[j]+((i2-teammatch[j])*3);
}

for(int j = 0;j<i-1;++j){
for(int k = 0;k<50;++k){
    if((teamnames[j][k]>=65&&teamnames[j][k]<=90)||teamnames[j][k]==46||(teamnames[j][k]>=97&&teamnames[j][k]<=122)){

    }else{
        teamnames[j][k] = ' ';
    }
}
}
for(int j = 0;j<i-1;++j){
for(int k = 0;k<50;++k){
        printf("%c",teamnames[j][k]);
}
printf("\n");
}

for(int j = 0;j<i-1;++j){
spacecheck = 0;
breaker =0;
for(int k = 0;k<50;++k){
    if (breaker == 0){
        if(teamnames[j][k] == ' '){
            if(teamnames[j][k+1] != ' '){
                breaker = 1;
                teamnames2[j][k] = '\0';
            }else{
                if (spacecheck == 0){
                    spacecheck = 1;
                    teamnames2[j][k]=teamnames[j][k];
                }
                else if (spacecheck == 1){
                    breaker = 1;
                    teamnames2[j][k] = '\0';
                    }
            }

        }else{
            teamnames2[j][k]=teamnames[j][k];
        }
    }
}
}


for(int j = 0;j<i-1;++j){
printf("%s\n",teamnames2[j]);
}
printf("\nbreak\n");
for(int j = 0;j<i;++j){
teamscoretemp[j]=teamscore[j];
}
maxs = maxfind(teamscore,i);
maxsval = teamscore[maxs];
mins = minfind(teamscoretemp,i);
teamscoretemp[mins] = 9999;
mins = minfind(teamscoretemp,i);
teamscoretemp[mins] = 9999;
mins = minfind(teamscoretemp,i);
teamscoretemp[mins] = 9999;
mins = minfind(teamscoretemp,i);
minsval = teamscoretemp[mins];


for(int j = 0;j<i;++j){
if(teammaxscore[j]>maxsval){
    printf("%s\n",teamnames2[j]);
}
}

minsval+=((i2-teammatch[mins])*3);

for(int j = 0;j<i-1;++j){
if(teamscore[j]<minsval){
    printf("%s\n",teamnames2[j]);
}
}

}
int maxfind(int *listptr,int teamnum){
    int max = 1;
    for(int k = 0;k<teamnum;++k){
        for(int j = 0;j<teamnum;++j){
            if(*(listptr+k)>*(listptr+j)){
                max = 0;
            }
        }
            if(max == 0){

                return k;
            }
        }
}

int minfind(int *listptr,int teamnum){
    int min = 0;
    for(int k = 0;k<teamnum;++k){
        for(int j = 0;j<teamnum;++j){
            if(*(listptr+k)<=*(listptr+j)){
                ++min;
            }
        }
            if(min == teamnum){
                return k;
            }
            min = 0;
    }
}
