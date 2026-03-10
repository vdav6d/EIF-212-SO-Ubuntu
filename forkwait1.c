#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

pid_t wait(int *wstatus);
int main() {
    int p;
    p = fork();
    if(p == 0) {
        printf("Soy hijo\n");
        exit(0);
    }
    wait(NULL); // Wait for Child process to COMPLETE.
    printf("continua el padre \n");
    return 0;
}
