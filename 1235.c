// Justifier **

#include<stdio.h>
#include<string.h>

int main(){
    int i,j,k,l,m,n,o;
    char ch[1001];
    scanf("%d",&n);
    getchar();

    for(i=0; i<n; i++){

        gets(ch);
        l = strlen(ch);

        for(j=(l/2)-1; j>=0; j--){
            printf("%c",ch[j]);
        }

        for(j=l-1; j>=(l/2); j--){
            printf("%c",ch[j]);
        }
        printf("\n");
    }

    return 0;
}