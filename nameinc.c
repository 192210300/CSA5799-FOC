#include <stdio.h>

int main ()
{
   char yourname;
   int yourage;

    printf("Whats your name?\t");
    scanf("%c",&yourname); 
    printf("How old are you?\t");
    scanf("%d",&yourage);
    printf("You are %d years old and your name is %c\n\n\n",yourage,yourname);
    system("pause");
    return(0);
}
