#include<stdio.h>
main(){

int i = 0, goukei = 0;

while (i != -999) {
goukei += i;
printf("数を入れて : ");
scanf("%d",&i);
}

printf("合計%d",goukei);
}