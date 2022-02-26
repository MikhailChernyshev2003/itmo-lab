#include <cstdio>
#include <string.h>
#include "program/WordCount.cpp"


int main(int argc, char *argv[]) {
    char command[3];
    char fileName[strlen(argv[2])];
    command[0] = argv[1][0];
    command[1] = argv[1][1];
    for (int i = 0; i < strlen(argv[2]); ++i) {
        fileName[i] = argv[2][i];
    }
//    printf("%i", WordCount(command, fileName));
    WordCount(command, fileName);
    return 0;
}

