#include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 4}, len=sizeof(arr)/sizeof(arr[0]), n = 4, cont = 0;

    for (int i = 0; i < len; i++) {
        if (n == arr[i]) {
            cont++;
        }
    }

    printf("Il numero %d e' ripetuto %d volte\n", n, cont);

    return 0;
}