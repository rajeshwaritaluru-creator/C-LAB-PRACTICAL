#include<stdio.h>
int main(void)
{
    FILE *fp;
    char text[200];
    char ch;
    printf("enter a line of text:");
    scanf("%199[^\n]", text);
    fp=fopen("data.txt", "w");
    if(fp==NULL){
        printf("Unable to open file for writing.\n");
        return 1;
    }
    fprintf(fp, "%s\n", text);
    fclose(fp);
    fp=fopen("Data.txt", "r");
    if(fp==NULL){
        printf("data read form file:\n");
        return 1;
    }
    while((ch=fgetc(fp)) !=EOF)
    putchar(ch);
    fclose(fp);
    return 0;
}