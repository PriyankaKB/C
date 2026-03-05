#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


#define MAX_LINES 5      // Maximum number of lines to read
#define MAX_LENGTH 100   // Maximum length of each line

int main() {
    char lines[MAX_LINES][MAX_LENGTH];
    int i;


    for (i = 0; i < MAX_LINES; i++) {

        // Read a line safely, including spaces
        if (fgets(lines[i], sizeof(lines[i]), stdin) == NULL) {
            break; // Stop if input fails
        }

        // Remove trailing newline if present
        size_t len = strlen(lines[i]);
        if (len > 0 && lines[i][len - 1] == '\n') {
            lines[i][len - 1] = '\0';
        }

        // Stop if the user entered an empty line
        if (lines[i][0] == '\0') {
            break;
        }
    }

    for (int j = 0; j < i; j++) {
        printf("%s\n", lines[j]);
    }

    return 0;
}
