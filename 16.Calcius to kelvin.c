#include<stdio.h>
#include<math.h>
int main () {
    float celcius;

    printf("Enter celcious : ");
    scanf("%f", &celcius);

    float kelvin = celcius + 273;
    printf("Kelvin temprature of %f is : %f \n",celcius,kelvin);
    
    return 0;
}