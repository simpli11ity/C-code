// EX.1 - READ A TEXT FILE CHAR BY CHAR
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    FILE *fp;   //declare a file pointer variable
    char ch;
    float count=0, counter=0, total=0; //counter to count the number of chars (i.e. the size of the file)
    float percent=0;
    
    fp = fopen("newfile.txt","r");  //open the file, text reading mode
    if (fp ==NULL)               //test if everything was ok
        printf("Cannot open file.\n");
    else
    {       
        while((ch = fgetc( fp )) != EOF) 
        {
        
            if (isdigit(ch))
            {
                printf("%c", ch);
                count++;
            }
            else 
            {
            counter++;
            printf("%c",ch);   //print the char just read
            }
            total=counter+count;
            
      
        }
        

        
        
    }
    
    
    percent = ((count / total) * 100) ;
    if (percent > 20.0)
    {
        printf("\ntoo many digits\n");
    }
    else
    {
    printf("\nTotal number of digits is %f\n", total);
    printf("\nthe total percent of digits is %2f \n", percent);
    printf("\nthe amound of digits in the file  is %f,  \n the amount of characters in the file is %f",count, counter);
    }
    getchar();
    return 0;
}
