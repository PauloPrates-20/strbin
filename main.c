#include "strbin.h"
#include <stdio.h>

int main(int argc, char **argv) {
    if(argc < 2) {
        printf("informe a mensagem\n");

        return -1;
    }
    if(argc > 2) {
        printf("informe apenas uma mensagem\n");

        return -1;
    }

    atob(argv[1]);

    return 0;
}