/* 
Print "Hello, World!" on a single line, and then print the already provided input string to stdout.
*/

#include <stdio.h> // Header file for standard input/output
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s); // Scan the input from user
    printf("Hello, World!\n"); // Print to the output
    printf(s);
  	
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
