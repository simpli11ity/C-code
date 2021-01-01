//part A peter swayne
#include <stdio.h>
#include <stdlib>

main()
{
    int r, i;
    FILE *fp;
    
    //this is a time since 1900 in seconds and is used to seed the random number generator
    fp = fopen ("num1000.bin", "wb+");
    srand(time(NULL));
    for(i=0;i<1000;i++)
    {
        r=rand() % 20;
        fwrite(&r, sizeof(int), 1, fp);
    }
    fclose(fp);
    
    return 0;
        
}