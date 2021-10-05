// Fit or Dont fit II

#include<stdio.h>
#include<string.h>

int main(){
    
    int i,j,k,l,m,n,o,p=0;
    char a[1001], b[1001];
    scanf("%d",&n);
    getchar();

    for (i=0; i<n; i++){

        scanf("%s %s", &a, &b);
        // gets(b);

        k = strlen(b);
        l = strlen(a);

        p = 0;
        for (m=0,j=l-k; j<l; j++,m++){

            if(a[j] != b[m]){
                printf("nao encaixa\n");
                break;
            }
            else {
                p++;
            }
        }
        if(k == p){
            printf("encaixa\n");
        }
    }
    return 0;
}