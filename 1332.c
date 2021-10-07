// One-Two-Three

#include<stdio.h>
#include<string.h>

int main(){
    int i,j,n,m,l;
    char ch[1001];

    scanf("%d",&n);

    getchar();

    for(i=0; i<n; i++){

        gets(ch);

        l = strlen(ch);

        if(l == 5) printf("3\n");

        else if(l == 3){

            if ((ch[0] == 'o' && ch[1] == 'n') || (ch[0] == 'o' && ch[2] == 'e') || (ch[1] == 'n' && ch[2] == 'e'))
                printf("1\n");
            else 
                printf("2\n");
        }
        
    }

    return 0;
}