#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    int pipeFileDescriptor[2];
    char writeMessages[2][20] = {"Mensagem 1", "Segunda mensagem"};
    char readMessages[20];
    int returnPipe = pipe(pipeFileDescriptor);

    pid_t pid = fork();

    if (returnPipe == -1) {
        printf("Erro to create pipe");
        return 1;
    }

    for (int i = 0; i < 2; i++) {

        if (pid != 0) {
            printf("(NO PAI) Writing message %d is \"%s\"\n", i+1, writeMessages[i]);
            write(pipeFileDescriptor[1], writeMessages[i], sizeof(char) * 20);
            printf("PROCESS ID: %d\n", pid);
        }

        else {
            read(pipeFileDescriptor[0], readMessages, sizeof(char) * 20);
            printf("(NO FILHO) Reading Message %d is \"%s\"\n", i+1, readMessages);
            printf("PROCESS ID: %d\n", pid);
        }
    }

    return 0;
}
