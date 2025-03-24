#include<stdio.h>
#include <stdio.h>

int main() {
    int number = 25;
    char star = '*';
    int age = 22;
    float pi = 3.1416;
    
    int a = 30;
    int A = 40;
    
    // Printing variables
    printf("Number: %d\n", number);
    printf("Star: %c\n", star);
    printf("Age: %d\n", age);
    printf("Pi: %.4f\n", pi);  // Prints pi with 4 decimal places
    printf("Lowercase a: %d\n", a);
    printf("Uppercase A: %d\n", A);
    printf("%d\n",number);
    printf("%.10+f\n",pi);


    return 0;
}


#include<stdio.h>           ///Type Declaration...!!

int main() {
    int a = 22;
    int b = a;
    int c = b *6;
    int d = 1,e;

    int oldAge = 25;
    int years = 2 ;
    int newage = oldAge + years;

    int x,y,z;
    x=y=z=4;

    return 0;
}



///Arithmatic Declaration..! like( a + b)

#include<stdio.h>
#include<math.h>

int main () {
    int a;
    printf("Enter a : ");
    scanf("%d",&a);

    int area= pow(a,2);       //pow(x,y) means that y is the power of x such as(x^y)
    printf("%d",area);
    return 0;
       

}

#include<stdio.h>
#include<math.h>
int main() {
    printf("%f ",2.0*2);
    return 0;
}


///C programming follows "BODMAS" rule..!!
/// Also follows (*,/,%,+,-,)
//Relational operator..

int main() {
    printf("%d",4!=4);
    return 0;
}

//validity check
#include<stdio.h>
int main() {
    printf("%d",8^8);
    return 0;
}