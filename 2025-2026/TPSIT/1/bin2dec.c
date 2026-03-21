#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) { // Se gli argomenti non sono 2
        fprintf(stderr, "Gli argomenti forniti non sono due\n");

        return 1;
    }

    int dec = 0;
    char *bin = argv[1];

    for (int i = 0; i < strlen(bin); i++) { // Per ogni carattere della stringa aumentare il contatore i
        if ((bin[i] - '0') > 1 || (bin[i] - '0') < 0) { // Se la cifra è maggiore di 1 o minore di 0
            fprintf(stderr, "L'argomento fornito contiene un numero diverso da 0 o 1\n"); //

            return 1;
        }

        dec = dec * 2 + (bin[i] - '0');
    }

    printf("%s (2) -> %d (10)\n", bin, dec); // Stampa il risultato

    return 0;
}
