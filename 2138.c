// Most frequent digit

#include<stdio.h>
#include<string.h>

int main(){
    int i,j,n[10],l;
    char s[1000001];

    while (scanf("%s",&s) != EOF)
    {
        // gets(s);

        l = strlen(s);

        for(j=0; j<10; j++){
            n[j] = 0;
        }

        for(i=0; i<l; i++){

            if (s[i] == '0') n[0]++;
            else if (s[i] == '1') n[1]++;
            else if (s[i] == '2') n[2]++;
            else if (s[i] == '3') n[3]++;
            else if (s[i] == '4') n[4]++;
            else if (s[i] == '5') n[5]++;
            else if (s[i] == '6') n[6]++;
            else if (s[i] == '7') n[7]++;
            else if (s[i] == '8') n[8]++;
            else if (s[i] == '9') n[9]++;
        }

        int max = n[0], f=0;
        for(j=0; j<10; j++){
            if (n[j] >= max){
                max = n[j];
                f = j;
            }
        }

        printf("%d\n",f);
    }
    

    return 0;
}