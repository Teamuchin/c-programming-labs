#include <stdio.h>

int power(int n,int t);
int main()
{
int a;
int b;
int multiplier;
int sum;
int temp1;


scanf("%d",&a);
scanf("%d",&b);
multiplier = 10;
sum = 0;
temp1 = a;
while(a%multiplier != a)
{
multiplier= multiplier*10;
}
multiplier = multiplier/10;
while(multiplier!=1)
{
sum+=(power((a-(a%multiplier))/multiplier,b));
a=a%multiplier;
b+=1;
multiplier = multiplier/10;
}
sum+=(power((a-(a%multiplier)),b));
if(sum%temp1 == 0)
{
printf("%d\n",sum/temp1);
}else
{
printf("-1\n");
}

}


int power(int n, int t){
int temp = n;
for(int i = 0;i<t-1;++i)
{
n = n*temp;
}
return n;
}
