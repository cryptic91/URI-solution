// LED
#include<stdio.h>
#include<string.h>

int main(){
    int i,j,k,l,m=0,n,o;
    char arr[1001];

    scanf("%d",&n);
    for(i=0; i<n; i++){

        scanf("%s",&arr);

        l = strlen(arr);

        for(j=0; j<l; j++){
            if(arr[j]=='1') m += 2;

            else if(arr[j]=='2' || arr[j]=='3' || arr[j]=='5') m += 5;

            else if(arr[j]=='0' || arr[j]=='6' || arr[j]=='9') m += 6;

            else if(arr[j]=='4') m += 4;

            else if(arr[j]=='7') m += 3;

            else if(arr[j]=='8') m += 7;
        }

        printf("%d leds\n",m);

        m=0;
    }

    return 0;
}