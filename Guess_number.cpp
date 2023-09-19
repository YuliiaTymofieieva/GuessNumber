#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main() {
    double a = 10.1, b = 21.12;
    double d;

    int iSecret, iGuess;
    srand(static_cast<unsigned int>(time(NULL))); // Inicjalizacja generatora liczb pseudolosowych

    iSecret = rand() % 100 + 1; // Generowanie tajnej liczby

    do {
        printf("\nGuess the number (1 to 10): ");
        scanf_s("%d", &iGuess);
        if (iSecret < iGuess) puts("The secret number is lower");
        else if (iSecret > iGuess) puts("The secret number is higher");
    } while (iSecret != iGuess);

    puts("Congratulations!");
    return 0;
}




