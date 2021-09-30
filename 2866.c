// Cryptotext
#include<stdio.h>
#include<string.h>

int main(){
    
    int i,j,k,l,m,n,o;
    char arr[1000001], arr2[10001],rev[10001];

    scanf("%d",&n);

    getchar();

    for(j=0; j<n; j++){

        gets(arr);

        l = strlen(arr);

        // m = 0;

        for(i=l-1; i>=0; i--){

            if(arr[i] >= 'a' && arr[i] <= 'z'){
    /*            arr2[m] = arr[i];
                m++ ;   */

                printf("%c",arr[i]);
            }
        }

        /*
        arr2[m] = '\0';

        i=0;

        for(i=(strlen(arr2))-1; i>=0; i--){
        
            printf("%c",arr2[i]);
        }
        */

        printf("\n");

    /*  arr2[m] = '\0';
        
        k = (strlen(arr2))-1 ;

        for(i=0; i<strlen(arr2); i++){
            rev[k] = arr2[i];
            k--;
        }
        rev[k] = '\0';

        puts(rev);
        */
    }

    return 0;
}