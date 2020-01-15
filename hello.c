#include <cs50.h> //required for string functions in this example.
#include <stdio.h>

int main(void)
{
    printf("Hello, World\n");
    
    string answer = get_string("What is your name?\n");
    printf("Hello, %s\n", answer);
    
}
