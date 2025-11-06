#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char input[100];
    FILE* fp;
    char c;
    
    fp = fopen("sample.txt", "r");
    
    if(fp == NULL)
    {
          printf("Failed to open file! \n");
          system("PAUSE");
          return -1;
          
    }

    while((c = fgetc(fp)) != EOF)
    {
             putchar(c);
    }

    fclose(fp);
    
  system("PAUSE");	
  return 0;
}
