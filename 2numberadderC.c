#include <stdio.h>
#include <stdlib.h>


int main () {
int firstnum;
int secondnum;




//Prints to the output asking user to input the first number to be added
printf("Input your first integer\n");

scanf("%d", &firstnum);
//Takes input from the user, and sets it to the variable firstnum

printf("Input your second integer\n");
//Asks for the second

scanf("%d", &secondnum);

int finalanswer = firstnum + secondnum;
//sets a variable equal to the first user inputted integer and the second user inputted integer

printf("%d\n", finalanswer);
//prints the variable set in the last line


return 0;

}

