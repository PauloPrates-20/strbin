#include "strbin.h"
#include <stdint.h>
#include <ctype.h>
#include <stdio.h>

void atob(const char *s) {
    while(*s) {
        uint8_t n = *s;

        if(isspace(*s)) printf(" ");
        else {
            for(int i = 8; i >= 0; i--) {
                printf("%d", ((n >> i) & 1));
            }
            if(!isspace(*(s + 1))) {
                printf(" ");
            }
        }

        s++;
    }
}