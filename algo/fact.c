#include <stdio.h>

#define DIGIT 500000

int main(){

    while(1){
        //initialize
        short int a[DIGIT+1];
        int x, i;
        for(i=0; i<DIGIT+1; i++) a[i]=-1;

        //take input
        printf("Enter your integer (0 for exit): ");
        scanf("%d", &x);
        if(x<1) break;

        int j;
        i=x;
        for(j=DIGIT; i>0; j--){
            a[j]=i%10;
            i=i/10;
        }

        //calculates factorial
        int k=0;
        for(i=x-1; i>0; i--){
            for(j=DIGIT; a[j]>=0; j--){
                k=(i*a[j])+k;
                a[j]=k%10;
                k=k/10;
            }

            a[j]=k%10;
            k=k/10;
            a[j-1]=k;

            for(k=0; a[k]<1; k++) a[k]=-1;
            k=0;
        }

        //show output
        for(i=0; a[i]<1; i++);
        for(; i<DIGIT+1; i++) printf("%hd", a[i]);
        printf("\n\n");
    }

    return 0;
}
