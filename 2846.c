//Fibonot
#include<stdio.h>

int main(){
    int n,arr[1000],b[1000],i,j;

    arr[0] = 1;
    arr[1] = 1;
    for(i=0; i<500; i++){
        arr[i+2] = arr[i] + arr[i+1];
    }
    // for(j=0; j<1000; j++){
    //     b[j] = j++;
    // }
    // b[0] = 0;

    // for(j=0; j<1000; j++){
    //     if (b[j]==arr[j]){
    //         j--;
    //         b[j] = j;
    //     }
    //     else{
    //         b[j] = j;
    //     }
    // }

    int pos=0,s;
    scanf("%d",&s);

    for(j=0; j<100; j++){
        for(i=arr[j]+1; i<=arr[j+1]-1; i++){
            pos++;
            if(pos==s){
                printf("%d\n",i);
                return 0;
            }
            // printf("%d\n",i);
        }
    }

    // for(i=0; i<25; i++){
    //     printf("%d = %d\n",i+1,b[i]);
    // }
    return 0;
}