#include<stdio.h>

int main()
{
    FILE *fpIn, *fpOut;
    int cIn;
    
    if ((fpIn = fopen("maths.txt", "r"))== NULL)
    puts("Error: can't open file");
    else if ((fpOut = fopen("newMaths.txt", "w"))!=NULL)
    {
        while((cIn = fgetc(fpIn))!=EOF)
        fputc(cIn, fpOut);
        fclose(fpIn);
        fclose(fpOut);
        puts ("Copy complete!");
    }
    else
    puts ("Error in opening new file");
    getchar();
}