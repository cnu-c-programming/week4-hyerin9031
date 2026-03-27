#include <stdio.h>

int main() {
    const char* data = "2026-03-24";
    char buffer[64];
    int year, month, day;

    sscanf(data,"%d-%d-%d", &year, &month, &day);
    sprintf(buffer, "%d/%d/%d", day, month, year);

    printf("%s\n", buffer);
    return 0;
}
