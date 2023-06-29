#include <stdio.h>
#include <string.h>

int main() {
    char destination[20] = "Hello, ";
    const char* source = "world!";

    strcat(destination, source);

    printf("%s\n", destination);
    printf("%s\n", source); 
    return 0;
}

