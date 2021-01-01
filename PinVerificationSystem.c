#include <stdio.h>
#include <stdlib.h>

#define SIZE 4
int main()
{


    int incorrect=0; //check the amount the pin was entered incorrectly
    int correct=0;    //check the amount the pin was entered correctly
    int menu=0;      // int for chosing menu in switch case

    int newpin[SIZE];               //user enters new pin code
    int newpin_verify[SIZE];        //used to check the pin code entered twice match
    int pin[SIZE];                  //pin variable used as memory to store current pin even when changed
    int pin_verify[SIZE]={1,2,3,4};           //used to verify pin code
    int default_pin[SIZE]={1,2,3,4};   //a set pin code
    int i;

    pin_verify[SIZE]=default_pin[SIZE];                     //variable for for statement for reading and writing to the array
do
{

    printf(" Select your option from the choices  below. \n (1) Enter PIN and verify correct. \n (2) Change PIN \n (3) Display the number of times the PIN was entered (i) Successfully (ii) Incorrectly \n (4) Exit Program \n ");
    scanf("%d", &menu); //user choosing menu





    switch (menu)
    {
            case 1:
            printf("You have selected to verify your pin,  Please Enter your set pin \n");

            for(i=0;i<SIZE;i++)
            {
            scanf("%d", &pin[i]);
            }

            for(i=0;i<SIZE;i++)
            {
            if(pin[i]==pin_verify[i])
            {
                printf("You have entered the correct pin\n");
                correct++;
            }

            else
            {
                printf("You have entered your pin incorrectly\n");
                incorrect++;
            }
            }
         break;


            case 2:
            {
                printf("Enter your new pin \n");

                for(i=0;i<SIZE;i++)
                {
            scanf("%d", &newpin[i]);
                }

            printf("Confirm your new pin\n");

            for(i=0;i<SIZE;i++)
            {
            scanf("%d", &newpin_verify[i]);
            }
                }



            for(i=0;i<SIZE;i++)
            {
            if(newpin[i]==newpin_verify[i])
            {


                       printf("Your pin has now been changed\n");
                       pin_verify[i]=newpin_verify[i];
            }
            else
            {
                printf("You pins do not match\n");
            }
            }
            break;

            case 3:
            printf("the pin was enter %d times correctly\n", correct);
            printf("the pin was entered %d times incorrectly\n", incorrect);
            break;

            case 4:
                return(0);
            break;

            default:
            printf("Invalid choice\n");
            break;
            }
        }

    while(menu == 1 || 2 || 3 || 4);



}
