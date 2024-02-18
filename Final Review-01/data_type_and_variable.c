#include<stdio.h>
#include <stdbool.h> // Include header for bool
int main ()
{
    /***************************
    Data Type:
int = real number(ex:1,2,3,45.......) store 2 or 4 byte
float = frectional number(ex: 3.1416.) store 4byte
char = number with any word or sentnce.(ex: '1'. a,b,c, jehin tajowar masud)
double = same type of float but capbility is 2X float.  store 8byte
long long = used for any biggest number.(ex: 10000000000000,1111111111)store 2 or 4 byte
boolean	= 1 byte	Stores true or false values
    *******************************/
    int age = 20;
    printf("Age: %d\n", age);
    float height = 1.75;
    printf("Height: %.2f meters\n", height); // Format to show 2 decimal places

    char initial = 'J';
    printf("Initial: %c\n", initial);

    char name[20] = "Jehin Tajowar Masud";
    printf("Name: %s\n", name);
    bool isEligible = true;
    printf("Is eligible: %s\n", isEligible ? "Yes" : "No"); // Conditional expression
    return 0;
}