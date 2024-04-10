#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int dice(){
    int d;
    d = rand() %100 +1;
    return d;
}

int main() {
    srand(time(NULL));
    int i;
    int my_array[10];

    for ( i=0 ; i<10 ; i++ ){
        my_array[i] = dice();
        printf("%d\t",my_array[i]);
    }
    int number;
    printf("\nEnter a number to search: ");
    scanf("%d",&number);

    for ( i=0 ; number != my_array[i] && i<10 ; i++ ) {

    }
    if ( number == my_array[i])
        printf("it is in the array");
    else
        printf("it is NOT in the array");

    return 0;
}
