#include <stdio.h>


char indicate [10] = {'_','_','_','_','_','_','_','_','_','_'};
                                                                                                                                                                                                                                                                  char wordtoguess [10] = {'X','E','N','O','B','I','O','T','I','C'};
int error=0;

int main () {

    printf("The word that you have to find is : _ _ _ _ _ _ _ _ _ _\n");

    while ( error < 6 ) {
        printf("Try a letter: \n");
        char letter;
        scanf(" %c",&letter);

        char found = 0;

        for (int i = 0; i < 10; ++i) {
            if (letter == wordtoguess[i]) {
                indicate [i] = wordtoguess[i] ;
                found = 1 ;
            }
        }
        if (!found) {
            error += 1;
            printf("The letter isn't correct, you only have %d errors left. \n", 4 - error);
        } else {
            printf("Well Done !\n");
        }

        printf("You found this : ");
        for (int i = 0; i < 10; ++i) {
            printf("%c", indicate[i]);
        }
        printf("\n");

        if (error == 6) {
            printf("You are Hanged; The word to find was : ");
            for (int i = 0; i < 10; ++i) {
                printf("%c", wordtoguess[i]);
            }
            printf("\n");
            return 1;
        }

        int correct = 1;
        for (int i = 0; i < 10; ++i) {
            if (indicate[i] == '_') {
                correct = 0;
                break;
            }
        }

        if (correct) {
            printf("...well done you had me this time...Next time you'll get hanged : ");
            for (int i = 0; i < 10; ++i) {
                printf("%c", wordtoguess[i]);
            }
            printf("\n");
            return 0;
        }
    }

    return 0;
}