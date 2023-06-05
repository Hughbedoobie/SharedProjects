#include <stdio.h>
/* Be able to convert entered fahrenheit to celcius and vice versa */

int main()
{

    int select;
    int temp;
    int convert;
    printf("Welcome to Hugh's Magic Temperature Converter!\n");
   
    start: /* user prompt loop begins */
    select = 0; 

    printf("\nEnter 0 to convert fahrenheit to celcius.\n");
    printf("Enter 1 to convert celcius to fahrenheit.\n") ;
       
    scanf("%d", &select); /* user selects F or C conversion */

    /* Deals with invalid user input */
    if(select != 0 && select != 1)
    {
        printf("Invalid input, please try again\n");
        goto start;
    }
    
    /* FAHRENHEIT to CELCIUS CONVERSION */
    if(select == 0) 
    {
        printf("\nYou selected the F to C conversion\n");
        printf("Enter the temperature you want converted\n");
       
        scanf("%d", &temp);
        convert = (temp-32)*0.555; 

        printf("\n%d degrees fahrenheit is approximately ", temp);
        printf("%d degrees celcius\n", convert);
    }
   
    /* CELCIUS to FAHRENHEIT CONVERSION */
    if(select == 1) 
    {
         printf("\nYou selected the C to F conversion\n");
        printf("Enter the temperature you want converted\n");
       
        scanf("%d", &temp);
        convert = (temp*1.8)+32; 
        printf("\n%d degrees celcius is approximately ", temp);
        printf("%d degrees fahrenheit\n", convert);
    }
    

    printf("\nWould you like to convert another temperature?\n"); /* Prompts user to start loop */
    printf("Enter 0 if no. Enter 1 if yes.\n");

    scanf("%d", &select); 
    /* Starts over user prompts */
    if(select == 1)
    {
        printf("Yippee! Isn't converting temps so exciting!?\n");
        goto start;
    }
    
    /* Message if user ends their use */
    printf("\nThanks for using Hughs Magical Temperature Converter!\n");

    return 0;
}