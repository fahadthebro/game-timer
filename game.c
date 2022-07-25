#include<stdio.h>
int main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b);
    if(a>b){
        sum=((24-a)+b);
        printf("O JOGO DUROU %d HORA(S)\n", sum);
    }
    else if(a<b){
         sum=(b-a);
         printf("O JOGO DUROU %d HORA(S)\n",sum);
    }
    else
    {
        sum=24;
        printf("O JOGO DUROU %d HORA(S)\n",sum);
    }
}

