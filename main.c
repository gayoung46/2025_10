#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char scr[] = "The worst things to eat before you sleep";
    char dst[100];
    
    strcpy(dst,scr);
    
    printf("copied string: %s\n", dst);
    
    
  system("PAUSE");	
  return 0;
}
