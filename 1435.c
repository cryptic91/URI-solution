// Square Matrix I
#include<stdio.h>

int main(){

    int i,j,k,l,m,n,o;
    
    while (1)
    {
        scanf("%d",&n);
        int arr[n][n];

        if(n==0) break;

        int h = n/2 ;
        if (n%2!=0) h++;
        int x=0, y=n ;

        for(l=1; l<=h; l++){
            
            for(i=x; i<y; i++){

                for(j=x; j<y; j++){

                    arr[i][j] = l ;
                }
            }
            x++;
            y--;
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