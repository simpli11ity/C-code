//peter swayne
#include <stdio.h>
#include <stdlib>

main()
{
    int r;
    FILE *fp;
    
    //this is a time since 1900 in seconds and is used to seed the random number generator
    fp = fopen ("num1000.bin", "rb+");
    if(fp == NULL)
    {
      puts("Error opening file");
    }
    else
    {
        r=0;
        fseek(fp , 2 * sizeof(int), SEEK_SET);
        fwrite(&r, sizeof(int), 1, fp);
        fseek(fp , 8 * sizeof(int), SEEK_SET);
        fwrite(&r, sizeof(int), 1, fp);
        fclose(fp);
    }
    
 
    return 0;
        
}