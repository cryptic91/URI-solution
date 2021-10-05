// Zero or One

#include<stdio.h>
#include<string.h>

int main(){

    int a,b,c,n,i,j;

    while ((scanf("%d%d%d",&a,&b,&c)) != EOF){
        
        if(a==b && b==c){
            printf("*\n");
        }
        else if(a!=b && b!=c && c==a){
            printf("B\n");
        }
        else if(a!=b && b==c && c!=a){
            printf("A\n");
        }
        else if(a==b && b!=c && c!=a){
            printf("C\n");
        }
    }
    
    return 0;
}