#include <stdio.h>
#include <string.h>
#include <malloc.h>


int main (){
    FILE *fp;
    char *c = malloc(100);
    char answer;
    printf("What file would you like to read: ");
    fscanf(stdin, "%s", &answer);
    // fp = fopen("newOne.txt", "r");
    printf("%s", answer);
    fp = fopen(answer, "r");
    fscanf(fp, "%s", c);
    printf("%s\n", c);

    fclose(fp);

}