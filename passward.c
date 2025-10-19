#include <stdio.h>

int main() {


    
    for(; ;) {
        int x;
        scanf("%d", &x);
        
        if(x != 1999) {
            printf("Wrong\n");
        } else {
            printf("Correct");
            break;
        }

        
        
    }

    return 0;
}