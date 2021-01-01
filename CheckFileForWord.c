/*
Authors: Tadhg O'Grady , Peter Swayne
Lab 2 Q3
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int line = 1;
    
    //max 40 characters
    char filename[41];
    char word[41];
    char check[41];
    
    puts("Enter the name of a text file:\n");
    gets(filename);
    
	//red in word to check
    puts("Enter a word to check for in the text file:\n");
    gets(word);
    printf("\n");
    
	//open file stream
    fp = fopen(filename, "r");
    
	//check if fp cannot be opened
    if(fp == NULL)
    {
        printf("Cannot open file.\n");
        getchar();
        exit(1);
    }
    
	//while the string is not NULL check if  the user word is contained in the string
    while(fgets(check, 41, fp) != NULL)
    {
        if((strstr(check, word)) != NULL)
        {
            printf("Word found on line %d \n", line);
            printf("The contents of the line is: %s\n",check);
            line++;
        }
        else
        {
            printf("Word not found on line %d \n", line);
            line++;
        }
    }
    
    getchar();
    return(0);
}//end main