#include <stdio.h>

char name[] = "sahaf";
int age = 22;
char addr[] = "Jatrabari";
void myInfo ();

int main (){
    int a = 10;
    int b = 20;
    int sum = a+b;
    
    printf ("\tThe sum of a+b is: %d\n", sum);
    myInfo();
    return 0;
}

void myInfo (){
    printf("\tmy name is: %s\n", name);
    printf("\tmy age: %d\n", age);
    printf("\tmy location: %s\n", addr);
}