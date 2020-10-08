#include <stdio.h>

char *readline(const char* prompt);

typedef struct SentenceChar SentenceChar;
struct SentenceChar {
    char c;
    SentenceChar* next;
    SentenceChar* prev;
};

int main()
{
    char* result;
    const char* test = "Please enter your name then press enter: \n ";
    result = readline(test);
   return 0;
}

char *readline(const char *prompt)
{


    char c[100];
    int i=0;

    char* userInput;
    for(i=0;prompt[i]!=0;i++)
        putchar(prompt[i]);

    while (c[i] != 10){  //When enter is pressed, returns the buffer

        c[i] = getchar();
        putchar(c[i]);
        i++;

    }

    return(userInput);
}
