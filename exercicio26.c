#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

int main (){
    int i;
    char pal[255];
    fgets(pal,255,stdin);
          for(i=0;pal[i]!='\0';i++){
            if(pal[i]=='a'||pal[i]=='e'||pal[i]=='i'||pal[i]=='o'||pal[i]=='u' || pal[i]=='A'||pal[i]=='E'||pal[i]=='I'||pal[i]=='O'||pal[i]=='U'){
                pal[i]='*';
            }
          }
          printf("%s", pal);









return 0;
}
