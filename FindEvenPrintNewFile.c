 #include <stdio.h>
#define max 81
main()
{
char one_line[max];
    FILE *fp_in, *fp_out;
    int counter= 0;
    
    
    if( (fp_in = fopen("newfile.txt", "r") ) == NULL)
        puts("error opening char");
    

    else if( (fp_out =fopen("eventxt.txt", "w") ) != NULL)
    {
        
        
        while(fgets(one_line, max, fp_in) != NULL)
        {   
            
                
            counter++;
            if (counter % 2 == 1)
            {
                fputs( one_line, fp_out);
            }
         
                
        }
        
        fclose( fp_in);
        
        fclose( fp_out);
        
        puts("copy complete");
        printf("counter %d", counter);
        
       
    }
    
    counter=0;
    if( (fp_in = fopen("newfile.txt", "r") ) == NULL)
        puts("error opening char");
    

    else if( (fp_out =fopen("evenztxt.txt", "w") ) != NULL)
    {
        
        
        while(fgets(one_line, max, fp_in) != NULL)
        {   
            
                
            counter++;
            if (counter % 2 == 0)
            {
                fputs( one_line, fp_out);
            }
         
                
        }
        
        fclose( fp_in);
        
        fclose( fp_out);
        
        puts("copy complete");
        printf("counter %d", counter);
    getchar();
}
}