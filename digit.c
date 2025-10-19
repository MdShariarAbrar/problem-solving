#include <stdio.h>

int main() {
        int t;
        int n;
        scanf("%d",&t);
        

        for(int i = 1; i <= t; i++) {
            scanf("%d", &n);
            if(n == 0) {
                printf("%d", 0);
            }
            while(n != 0) {
                printf("%d ", n%10);
                n/= 10;
            }
           
                printf("\n");

            
        }
    return 0;
}

