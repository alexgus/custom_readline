#include <stdio.h>

char *readline(const char* prompt);

typedef struct Word Word;
struct Word{
    char W[50];
    Word* nWord;    //mot suivant
    Word* pWord;    //mot precedent
};

typedef struct Data Data;
struct Data{
    Word *first;
};

int main()
{
    char* Result;
    const char* test = "Please enter your name then press enter : \n ";
    Result = readline(test);
    printf("%s\n", Result);

  // while (c != '$')
  // {
  //    c = getchar();
  //    printf("\n Entered character is: ");
  //    putchar(c);
  //    printf("\n");
  // }
  // return 0;
}




char *readline(const char *prompt)
{


    char* c[];
    int i=0;

    char* UserInput;
    for(i=0;prompt[i]!=0;i++)
        putchar(prompt[i]);

    //while ((c != 10) || (c != EOF) )
    while (*c[i] != 10){  //When enter is pressed, returns the buffer

        *c[i] = getchar();
        putchar(c[i]);
        i++;

    }

    return(UserInput);
}
