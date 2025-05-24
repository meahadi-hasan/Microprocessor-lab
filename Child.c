#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t pid = fork();
    if (pid == 0) {
        
        pid_t child_pid = fork();
        if (child_pid == 0) {
            printf("\nGrandchild %d", getpid());
        } else {
            printf("\nChild %d", getpid());
        }
    } else {
        
        printf("\nParent %d", getpid());
    }
    return 0;
}