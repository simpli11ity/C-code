//peter swayne
#include <stdio.h>
#include <stdlib>

main()
{
    int r, i;
    FILE *fp;
    
    //this is a time since 1900 in seconds and is used to seed the random number generator
    fp = fopen ("num1000.bin", "rb");
    for(i=0;i<1000;i++)
    {
        
        fread(&r, sizeof(int), 1, fp);
        printf("%d", r);
    }
    fclose(fp);
    getchar();
    return 0 ;
        
}