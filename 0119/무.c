#include<stdio.h>

int main_088(void) {
    /*
    int i = 0;

    while (i < 10) {
        printf("i=%d\n", i);
        i++;
    }
    printf("\n\n");
        
        i = 0;
  
    do {
        printf("i=%d\n", i);
        i++;
    } while (i < 10);

    printf("\n\n");

    for (i = 0; i < 10; i++) {
        printf("i=%d\n", i);
    }

    */
    /*
    int i = 0;
    for (; i <= 100; i++) {
        printf("i = %d\n", i);
        
    }

    printf("i의 최종값은 %d입니다.\n", i);

    */

    //continue

    int i = 0;
    for (; i < 100; i++) {
        if (i >=30 && i<=50) continue;
        printf("i = %d\n", i);
    }

    printf("i의 최종값은 %d입니다.\n", i);


	return 0;

}