#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    printf ("Hola mundo 1\n");
    fork(); // Asigna ID a PP (=Proceso Padre)
    printf ("Hola mundo 2 \n");
    return 0;
}