#include<stdio.h>
#include<math.h>

int main() {
    float celcius;
    printf("Enter celcius : ");
    scanf("%f",&celcius);

    float farenheit = (9*(celcius/5)) + 32;
    printf("Farenheit of %f is : %f \n",celcius, farenheit);
    return 0;

}