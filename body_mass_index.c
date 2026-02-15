#include <stdlib.h>
#include <stdio.h>


float bodyMassIndex(float weight , float height)
{
    if (height > 3.0) {
    height = height / 100.0;  //If height is greater than 3 (e.g., 136), it means it was entered in cm. Convert it to meters and calculate accordingly.
}
    float bmi = weight / (height*height);  // bmi = body mass index
    return bmi;
}

int main() {
    system("color 2F");  // 0 = siyah arka plan, A = açık yeşil yazı

    float weight;
    float height;

    printf("BODY MASS INDEX (BMI Calculator) \n\n", "");

    printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    printf("Enter your height : ");
    scanf("%f", &height);

    float result = bodyMassIndex(weight,height);
    printf("Your BMI: %.2f\n\n", result);  //This line of the code allows us to see the result on the screen.

    if( result<18)
    printf("underweight");
    else if(result<25)
    printf("normal");
    else if(result<30)
    printf("overweight");
    else
    printf("obese");

printf("\nPress Enter to exit...");   
getchar();
getchar();
    
    return 0;
}
