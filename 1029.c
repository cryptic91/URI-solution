// Fibonacci, how many calls?

#include<stdio.h>
#include<string.h>
int c;
int fibonacci(int a){
    c++ ;
    if (a == 0) return 0;
    else if (a == 1) return 1;
    else return (fibonacci(a-1) + fibonacci(a-2)) ;
/*
                   fib(4)
                /          \
            fib(3)         fib(2)
            /   \           /  \
        fib(2) fib(1)   fib(1) fib(0)
        /    \
     fib(1) fib(0)

     fib(4) = fib(1) x 3 = 3 ;
     & calls = 8 ;
*/
}

int main(){
    int i,j,n,s;
    scanf("%d",&n);
    // c = 0; 

    for(i=0; i<n; i++){
        c = 0;
        scanf("%d",&s);
        printf("fib(%d) = %d calls = %d\n",s,c-1,fibonacci(s));
    }
    // printf("count - %d\ncalls - %d",c-1,fibonacci(n));
    return 0;
}