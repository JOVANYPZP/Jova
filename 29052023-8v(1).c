#include <stdio.h>
#include <string.h>

int main() {
    const int car = 40;
    const int lin = 30;

    char pal[] = "si";
    int lon = strlen(pal);

    int line = car / lon;
    int res = car % lon;

    for (int i = 0; i < line; i++) {
        printf("%s\n", pal);
    }

    if (res > 0) {
        for (int i = 0; i < res; i++) {
            printf("%c", pal[i]);
        }
        printf("\n");
    }

    return 0;
}

