#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void symbolsToValues(int symbol1, int symbol2, int symbol3, int *X, int *Y, int *Z); // Turns the symbols provided by the user to their corresponding values

// Program
int main(void){
    int x, y, z = 0;
    int X,Y,Z = 0;
    char t;
    printf("--- WELCOME TO THE TERMINUS CALCULATOR ---\n");
    printf("Enter the Number that corresponds to the described symbol.\n");
    printf("\n1 - Circle\n2 - Black & White Circle Vertical\n3 - Black & White Circle Diagonal\n4 - Cross\n5 - X-Shape (Black Starts Down)\n6 - X-Shape (Black Starts Up)\n\n");

    printf("Enter the Symbol for X > ");
    scanf("%d", &x);
    if(x < 1 || x > 6){
        printf("You have entered an invalid number. Please close the program and try again.\n");
        scanf("%c",&t);
        scanf("%c",&t);
        return 0;
    }

    printf("Enter the Symbol for Y > ");
    scanf("%d", &y);
    if(y < 1 || y > 6){
        printf("You have entered an invalid number. Please close the program and try again.\n");
        scanf("%c",&t);
        scanf("%c",&t);
        return 0;
    }

    printf("Enter the Symbol for Z > ");
    scanf("%d", &z);
    if(z < 1 || z > 6){
        printf("You have entered an invalid number. Please close the program and try again.\n");
        scanf("%c",&t);
        scanf("%c",&t);
        return 0;
    }

    symbolsToValues(x,y,z, &X, &Y, &Z);

    // Finds Each Code
    int first = fabs((2*X+11));
    int second = fabs((((2*Z) + Y) - 5));
    int third = fabs(((Y+Z)-X));

    printf("\nThe Code Is %d-%d-%d\nPress Enter to close the program > ", first,second,third);
    // Just serves to prevent the program from closing before you get to use the code
    scanf("%c",&t);
    scanf("%c",&t);
    return 0;
}

// TODO - Find a simpler way to do this
void symbolsToValues(int symbol1, int symbol2, int symbol3, int *X, int *Y, int *Z){
    switch(symbol1){
        case 1:
            *X = 0;
            break;
        case 2:
            *X = 10;
            break;
        case 3:
            *X = 11;
            break;
        case 4:
            *X = 20;
            break;
        case 5:
            *X = 21;
            break;
        case 6:
            *X = 22;
            break;
        default:
            *X = -1;
            break;
    }

    switch(symbol2){
        case 1:
            *Y = 0;
            break;
        case 2:
            *Y = 10;
            break;
        case 3:
            *Y = 11;
            break;
        case 4:
            *Y = 20;
            break;
        case 5:
            *Y = 21;
            break;
        case 6:
            *Y = 22;
            break;
        default:
            *Y = -1;
            break;
    }

    switch(symbol3){
        case 1:
            *Z = 0;
            break;
        case 2:
            *Z = 10;
            break;
        case 3:
            *Z = 11;
            break;
        case 4:
            *Z = 20;
            break;
        case 5:
            *Z = 21;
            break;
        case 6:
            *Z = 22;
            break;
        default:
            *Z = -1;
            break;
    }
}