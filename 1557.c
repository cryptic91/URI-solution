// Square Matrix III
#include<stdio.h>

int space(int x){
    int y=0, g=x;
    while(g){
        g /= 10;
        y++;
    }

    return y;
}


int main(){

    int i,j,k,l,m,n,o;

    while (1)
    {
        scanf("%d",&n);
        if (n==0)  break;

        int arr[n][n];
        l=1;
        for(i=0; i<n; i++){
            
            m=l;
            for(j=0; j<n; j++){

                arr[i][j] = m; 
                m *= 2;
            }
            l *= 2;
        }

        int I = n-1, q = space(arr[I][I]);
        
        for(i=0; i<n; i++){

            for(j=0; j<n; j++){
                if (j==0){
                    k=arr[i][j];
                    o = space(k);
                    int p = q-o ;
                    for(int f=1; f<=p; f++){
                        printf(" ");
                    }
                    printf("%d",arr[i][j]);
                }

                else{
                    k=arr[i][j];
                    o = space(k);
                    int p = q-o ;
                    for(int f=1; f<=p; f++){
                        printf(" ");
                    }
                    printf(" %d",arr[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    
    return 0;
}