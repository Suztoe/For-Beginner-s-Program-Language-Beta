#include <stdio.h>
#include <time.h>

void PrintHello() {
    printf("Hello, world!\n");
}
void Help() {
    printf("For bignner Program Language\n");
}
void SayHi() {
    printf("hi.\n");
}
void Destroy() {
     return;
}
void Today() {
     time_t now = time(NULL);
     printf("%s", ctime(&now));
}
