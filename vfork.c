#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    pid_t pid = vfork(); // creating the child process

    if (pid == 0)
    { // checking if this is the a child process
        printf("This is the child process and pid is: %d\n\n", getpid());
        exit(0);
    }
    else if (pid > 0)
    { // parent process execution
        printf("This is the parent process and pid is: %d\n", getpid());
    }
    else
    {
        printf("Error while forking\n");
        exit(EXIT_FAILURE);
    }
    printf("hello from : %d\n", getpid());
    return 0;
}
