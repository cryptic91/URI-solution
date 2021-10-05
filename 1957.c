// Converting to Hexadecimal

#include <stdio.h>
#include <string.h>
int main()
{
    long long int d;
    char h[20];
    scanf("%lld", &d);
    long long int i=0, m, j, l;
    while(d>0)
    {
        m = d % 16;
        d/= 16;
        if(m<=9)
            h[i] = m+48;
        else if(m==10)
            h[i] = 'A';
        else if(m==11)
            h[i] = 'B';
        else if(m==12)
            h[i] = 'C';
        else if(m==13)
            h[i] = 'D';
        else if(m==14)
            h[i] = 'E';
        else if(m==15)
            h[i] = 'F';
        i++;
    }
    h[i] = '\0';
    l = strlen(h);
    
    for( j=l-1; j>=0; j-- )
        printf("%c", h[j]);
    
    printf("\n");
    
    return 0;
}
