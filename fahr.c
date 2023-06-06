#include <stdio.h>
/* Be able to convert entered fahrenheit to celcius and vice versa */

int main()
{

    char choiceone = 'y';
    char choicetwo;
    char blank;
    int temp;
    int convert;
    printf("Welcome to Hugh's Magic Temperature Converter!\n");
   
    while(choiceone == 'y')
    {
    choicetwo = blank; //resets choice value
    
    printf("Enter 'f' to convert fahrenheit to celcius\n");
    printf("Enter 'c' to convert celcius to fahrenheit\n");
    scanf(" %c", &choicetwo);

        /* FAHRENHEIT to CELCIUS CONVERSION */
        if(choicetwo == 'f') 
        {
            printf("\nYou selected the F to C conversion\n");
            printf("Enter the temperature you want converted\n");
        
            scanf("%d", &temp);
            convert = (temp-32)*0.555; 

            printf("\n%d degrees fahrenheit is approximately ", temp);
            printf("%d degrees celcius\n", convert);
        }
    
        /* CELCIUS to FAHRENHEIT CONVERSION */
        if(choicetwo == 'c') 
        {
            printf("\nYou selected the C to F conversion\n");
            printf("Enter the temperature you want converted\n");
        
            scanf("%d", &temp);
            convert = (temp*1.8)+32; 
            printf("\n%d degrees celcius is approximately ", temp);
            printf("%d degrees fahrenheit\n", convert);
        }

        /* deals with inputs not accepted for temperature selection */
        if(choicetwo != 'c' && choicetwo!= 'f')
        {
            printf("Sorry, that input is not an option.\n");
        }
       
        printf("Enter 'y' to continue. Enter 'n' to stop.\n");
        scanf(" %c", &choiceone);

        /* deals with inputs not accepted for continuation selection */
        while(choiceone != 'y' && choiceone != 'n')
        {
            printf("Sorry we couldn't tell if you wanted to continue or not!\n");
            printf("Enter 'y' to convert more! Enter 'n' to stop\n");
            scanf(" %c", &choiceone);
        }
    }

    return 0;
}
