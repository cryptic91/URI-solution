// Square Matrix II
#include<stdio.h>

int main(){

    int i,j,k,l,m,n,o;

    while (1)
    {
        scanf("%d",&n);
        if (n==0)  break;

        int arr[n][n];

        for(i=0; i<n; i++){
            
            m = i+1;
            for(j=0; j<=i; j++,m--){

                arr[i][j] = m; 
                
            }

            for(l=1,j=i; j<n; j++,l++){

                arr[i][j] = l; 

            }
        }


        for(i=0; i<n; i++){

            for(j=0; j<n; j++){
                if (j==0) printf("%3d",arr[i][j]);
                else printf(" %3d",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}