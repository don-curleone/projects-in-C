#include <stdio.h>
#include <stdlib.h>

int main() {

    int num = rand() % 100;

    for (;;){
        printf("enter your number: ");

        int guess;

        int result = scanf("%d", &guess);

        if(result != 1){
            printf("enter a valid number\n");
            while (getchar() != '\n');
            continue;
        }

        if(guess == num){
            printf("congrats! you won!\n");
            exit(0);
        } else {
            printf("nope! try again.\n");
        }
    }
    
    return 0;
}
