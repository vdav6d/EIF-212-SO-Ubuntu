#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

int main()
{
    printf ("PADRE\n"); 
    fork();

    printf ("HIJO\n");
    fork();

    printf("NIETO\n");  // Gets executed by PADRE and HIJO & their Childs. So: It is ran 4 times.
    return 0;
}
