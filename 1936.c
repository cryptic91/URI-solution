#include<stdio.h>

int main(){

    int n;
    int factorial[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    int count = 0;
    int k = 0;

    scanf("%d",&n);

    for(int i=0; i<10; i++)
    {
        if(factorial[i] > n)
        {
            k = i - 1;
            break;
        }
    }

    for(int i=k; i>=0; i--)
    {
        count += (n/factorial[i]);
        n %= factorial[i];
    }

    printf("%d\n",count);

    return 0;
}


/*
#include<stdio.h>


// int fact(int x){
//     long long int f=1,y;
//     for(y=1; y<=x; y++){
//         f = f*y;
//     }
//     return f;
// }

long long fact(long long x)
{
    if(x==1) return 1;
    else return x * fact(x-1);
}

int main(){
    long long int i,j,k,l,m,n,o;

    scanf("%d",&n);

    // printf("n = %d\n",fact(n));
    k=0;
    o = n;
    l = n/2;
    for(j=0; j<l; j++){

        for(i=0; i<n; i++){
            // o = n;
            if(fact(o) <= n){
                k++;
                m = fact(o);
                printf("k =%lld , m = %lld, o = %lld\n",k,m,o);
                break;
            }
            else{
                o--;
            }
        }

        n -= m;
        printf("n = %lld\n",n);
        if(n <= 0) break;
        m=0;
    }

    printf("%lld\n",k);

    return 0;
}

*/