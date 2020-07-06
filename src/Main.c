#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Lexer.h"

int main() {
    FILE *file;
    char filename[100];
    char line[2048];
    char *tokens[5];
    int i = 0;

    printf("Enter filename: ");
    fgets(filename, 100, stdin);
    strtok(filename, "\n");
    file = fopen(filename, "r");
    if (file) {
        printf("You loaded %s:\n\n", filename);
        while(fgets(line, 2048, file)) {
            /* printf("%s", line); */
            getTokens(tokens, line);
            i = 0;
            while (tokens[i]) {
                printf("%s\n", tokens[i]);
                i++;
            }

        }
        fclose(file);
    } else {
        printf("File not found. %s", filename);
        return 404;
    }
    return 0;
}

