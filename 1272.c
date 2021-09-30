// Hidden message

#include <stdio.h>
#include <string.h>

int main(){

    int i, j, n, l;
    char str[55];

    scanf("%d", &n);
    getchar();
    for (i = 0; i < n; i++)
    {
        gets(str);
        l = strlen(str);
        if (str[0] > 96 && str[0] < 123){
            printf("%c", str[0]);
        }

        for (j = 1; j < l; j++){

            if (str[j] > 96 && str[j] < 123){

                if (str[j - 1] < 96 || str[j - 1] > 123){
                    printf("%c", str[j]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}