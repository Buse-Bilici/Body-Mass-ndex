#include <stdlib.h>
#include <stdio.h>


int bodyMassIndex(float weight , float height)
{
    int bmi = weight / (height*height);  // bmi = body mass index
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

    int result = bodyMassIndex(weight,height);

    if( result<18)
    printf("underweight");
    else if(result<25)
    printf("normal");
    else if(result<30)
    printf("overweight");
    else
    printf("obese");
   
getchar();
getchar();
    
    return 0;
}
