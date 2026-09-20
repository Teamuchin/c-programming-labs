#include <stdio.h>

int toUpper(int inp);
int toLower(int inp2);
int toNumber(int inp3,int ct,int nm);

int main(){
char a;
int c = 0;
int count = 1;
while(scanf("%c",&a)!=EOF){
int b = a;


if(65<=b && b<=90)
{
toLower(b);
}
else if(97<=b&&b<=122)
{
toUpper(b);
}
else if(48<=b&&b<=57)
{
c =toNumber(b,count,c);
count= count*10;
}
else{
printf("%c",a);
}

}

int reverse = 0, r;

while (c != 0) {
    r = c % 10;
    reverse = reverse * 10 + r;
    c /= 10;
  }

printf("\n");
printf("%d",reverse);

}


int toLower(int inp){
inp+=32;
printf("%c",inp);
}



int toUpper(int inp2){
inp2-=32;
printf("%c",inp2);
}

int toNumber(int inp3,int ct,int nm){
inp3-=48;
printf(" ");
nm = nm+inp3*ct;
return(nm);
}
