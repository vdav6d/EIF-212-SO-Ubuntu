#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    printf ("Hola mundo 1\n");
    fork(); // Copy of all things coming gets created over here.
    printf ("Hola mundo 2 \n");
    return 0;
}