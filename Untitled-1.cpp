//notes(this should be C and not C++)

#include <stdio.h> //basic lib the one below too
#include <stdlib.h>
#include <math.h> //math lib

int main(){
    /*is this a comment*/
    const int AGE = 5; //const makes it unmodifiable *(giving upper case is common practice)
    // d for int, f for float, s is str, c is char
    int age;
    char name[20];
    printf("enter age: ");
    scanf("%d", &age); // & to store single char, num
    printf("%d",age);

    //fgets makes it more general, includes space, also stores enter key
    fgets(name, 20, stdin);    //stdn makes it a standard input

    scanf("%s", name);

    printf("%s",name);

    return 0;

    //prototyping
        double cube (double num);

        int main(){
            return 0;
        }
        
        double cube(double num){
            //do smth
        }
}