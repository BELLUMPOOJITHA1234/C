#include <stdio.h>
#define  ABC    10
#define  XYZ 	ABC - 1
int main(void) { 
    int i = 19;
    i = i - XYZ;

    printf("%d\n", i);
    return 0;
}

