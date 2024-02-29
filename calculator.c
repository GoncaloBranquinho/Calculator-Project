#include <stdio.h>
#include <math.h>
#include <string.h>
#define flushBuffer while ( getchar() != '\n' )
#define M_PI         3.14159265358979323846


void processInput(char* userInput){
        float number1=0, number2=0, radians=0;
        int number3=0, number4=0;
        switch(*userInput) { 
            case '+':{    // sum of two numbers  
                printf("Type two numbers:\n "); scanf("%f %f", &number1, &number2);
                printf("%f\n", number1 + number2);
                break;
            }
            case '-':{    // subtraction of two numbers
                printf("Type two numbers:\n "); scanf("%f %f", &number1, &number2);
                printf("%f\n", number1 - number2);
                break;
            }
            case '*':{    // multiplication of two numbers
                printf("Type two numbers:\n "); scanf("%f %f", &number1, &number2);
                printf("%f\n", number1 * number2);  
                break;
            }
            case '/':{    // division of two numbers
                printf("Type two numbers:\n "); scanf("%f %f", &number1, &number2);
                printf("%f\n", number1 / number2);
                break;
            }
            case '%':{    // remainder 
                printf("Type two numbers:\n "); scanf("%d %d", &number3, &number4);
                printf("%d\n", number3 % number4);
                break;
            }
            case '^':{    // raise to some numbers 
                printf("Type two numbers:\n "); scanf("%f %f", &number1, &number2);
                printf("%f\n", pow(number1,number2));
                break;
            }
            case 's':{    // sine
                printf("Type one number:\n "); scanf("%f", &number1);
                radians = number1 * ( M_PI / 180.0);    // converting to radians  
                printf("%f\n", sin(radians)); 
                break;
            }
            case 'c':{    // cosine
                printf("Type one number:\n "); scanf("%f", &number1);
                radians = number1 * ( M_PI / 180.0);    // converting to radians
                printf("%f\n", cos(radians)); 
                break;
            }
            case 't':{    // tangent
                printf("Type one number:\n "); scanf("%f", &number1);
                if (number1 == 90 || number1 == 270) {    // Undefined if the input is 90,270,450...+180
                    printf("Undefined value\n");
                    break;
                }
                else{
                    radians = number1 * ( M_PI / 180.0);    // converting to radians
                    printf("%f\n", tan(radians)); 
                    break;
                }
            }
            case '1':{    // arcsine
                printf("Type one number:\n "); scanf("%f", &number1);
                printf("%f\n", asin(number1)); 
                break;
            }
            case '2':{    // arccosine
                printf("Type one number:\n "); scanf("%f", &number1);
                printf("%f\n", acos(number1)); 
                break;
            }
            case '3':{    // arctangent
                printf("Type one number:\n "); scanf("%f", &number1);
                printf("%f\n", atan(number1)); 
                break;
            }
            case '4':{    // square root
                printf("Type one number:\n "); scanf("%f", &number1);
                printf("%f\n", sqrt(number1));
                break;
            }   
            case '5':{    // cube root
                printf("Type one number:\n "); scanf("%f", &number1);
                printf("%f\n", cbrt(number1));
                break;
            }
            default:{    // invalid input if the user doesnt type any of those characters
                printf("Invalid Input\n");
                break;
            }
        } 
    flushBuffer;    // clearing input buffer
}


int main(){
    char userInput;  
    
    printf("\nHello!! If you need assistance, please type 'm'.\n\tIf you want to exit type 'x'.\n\n");    // first message the user will see
    
    while(1){    // keep runnig the code until you press 'x'

        printf("Enter your operator: ");    
        userInput = getchar();    // enter a single character as input        
        if (userInput == 'x') {    // end the program if you type 'x'
            printf("I hope i was helpful,\nCome back if you need my help!");
            return 0;
        }
        
        if (userInput == 'm') {    // instruction manual
            printf("\nFirst enter only the operator, and then the numbers you want.\nYou can type the input numbers either one by one or together separate by a space.\nLeft side is the operator, right side is the definition.\n\t+  |  sum\n\t-  |  subtraction\n\t*  |  multiplication\n\t/  |  division\n\t%%  |  remainder\n\t^  |  raise to some number  (first number is the base and second is the exponent)\n\ts  |  sine \t\t    (degrees)\n\tc  |  cosine    \t    (degrees)\n\tt  |  tangent    \t    (degrees)\n\t1  |  arcsine\n\t2  |  arccosine\n\t3  |  arctangent\n\t4  |  square root\n\t5  |  cube root\n");
            flushBuffer;    // clear input buffer    
        } 
        else {
            processInput(&userInput);    // starts over the program     
        }
    }
    return 0;
} 