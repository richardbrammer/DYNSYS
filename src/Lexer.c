#include <string.h>
#include "Lexer.h"

void getTokens(char *tokens[5], char *code) {
    int i = 0;

    tokens[i] = strtok(code, " ");
    while(tokens[i] != NULL) {
        tokens[++i] = strtok(NULL, " ");
    }
}
