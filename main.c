#include <stdio.h>
#include <string.h>

void lulz(const char* i) {
    char j[256];
    printf_s("какой ты RYTP хочеш? ");
    //scanf_s("%255[^\n]", j); // так не работает
    fgets(j, sizeof(j), stdin);
    j[strcspn(j, "\n")] = '\0';
    printf_s("%s%s\n", j, i);
}

int main() {
    lulz(" RYTP");
    return 0;
}
