// divisibility by 3

#include<stdio.h>
// #include<string.h>

int main(){
    int i, j, n, f=0, o;

    while (scanf("%d",&n) != EOF)
    {
        f = 0;
        int m;
        scanf("%d",&m);
        // for(i=0; i<strlen(m); i++){
        //     f += m[i];
        // }
        while (m!=0)
        {
            f += m%10;
            m /= 10;
        }
        
        if (f%3 == 0){
            printf("%d sim\n",f);
        }
        else{
            printf("%d nao\n",f);
        }
    }

    return 0;
}