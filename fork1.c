#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

int main() {
    printf ("Hola mundo 1\n");
    fork(); // Asigna ID a PH (=Proceso Hijo)
    printf ("Hola mundo 2 \n");
    return 0;
}