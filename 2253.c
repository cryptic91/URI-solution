#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
    int i,j,l;
    char s[10001];
    // getchar();
    // while(getchar() != EOF){
        while(gets(s)){
        bool b=false, c=false, d=false;
        // gets(s);
        l = strlen(s);
        if(l < 6 || l > 32){
            printf("Senha invalida.\n");
        }
        else{
            bool a=true;
            for(j=0; j<l; j++){
                if(s[j] >= 65 && s[j] <= 90) b=true;
                else if(s[j] >= 97 && s[j] <= 122) c=true;
                else if(s[j] >= 48 && s[j] <= 57) d=true;
                else{
                    a=false;
                    break;
                } 
            }
            if(a && b && c && d) printf("Senha valida.\n");
            else printf("Senha invalida.\n");
        }
    }

    return 0;
}