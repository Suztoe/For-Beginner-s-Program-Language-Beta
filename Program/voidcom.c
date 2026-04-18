#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void PrintHello() {
    printf("Hello, world!\n");
}
void Help() {
    printf("For Beginner Program Language\n");
}
void SayHi() {
    printf("hi.\n");
}
void Destroy() {
     exit(0);
}
void Date() {
     time_t now = time(NULL);
     printf("%s", ctime(&now));
}

