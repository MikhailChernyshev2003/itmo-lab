#include <cstdio>
#include <cctype>
#include <cstring>

int WordCount(char command[], char fileName[]){
    FILE *file;
    char currentChar, previousChar;

    int countOfSymbol = 0;
    int countOfWords = 0;
    int countOfLines = 0;

    file = fopen(fileName, "r");

    if (file == NULL) {
        fprintf(stderr, "Не получилось открыть файл %s \n", fileName);
        return -1;
    }

    while ((currentChar = fgetc(file)) != EOF) {

        if (currentChar == '\n') {
            countOfLines++;
        } else {
            if (previousChar == '\0' || isspace(previousChar)) {
                countOfWords += 1;
            }
        }

        countOfSymbol++;
        previousChar = currentChar;
    }

//    for (int i = 0; i < 10; ++i) {

        if (strcmp(command, "-c") == 0 || strcmp(command, "--bytes") == 0) {
            printf("%d\n", countOfSymbol);
        }

        if (strcmp(command, "-w") == 0 || strcmp(command, "--words") == 0) {
            printf("%d\n", countOfWords);
        }

        if (strcmp(command, "-l") == 0 || strcmp(command, "--lines") == 0) {
            printf("%d\n", countOfLines + 1);
        }
//    }

    fclose(file);

    return 0;
}
