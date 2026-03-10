#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t p;
    p = fork();
    if(p == 0) {    // REMEMBER: If PID == 0, then we KNOW we are the Child process.
        printf ("Soy el hijo\n");
    }
    else {
        printf ("Soy el padre \n");
    }
    printf("fin\n"); 
    return 0;
}
