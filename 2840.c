//ballon++
#include<stdio.h>

int main(){

    int r, l, count=0;
    double pi=3.1415;

    scanf("%d %d",&r ,&l);

    double R = (1.333333333)*pi*r*r*r ;

    count = l/R;

    printf("%d\n",count);

    return 0;
}