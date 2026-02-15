#include <stdlib.h>
#include <stdio.h>


int bodyMassIndex(int weight , float height)
{
    int bmi = weight / (height*height);  // bmi = body mass index
    return bmi;
}

int main() {
    system("color 2F");  // 0 = siyah arka plan, A = açık yeşil yazı

    printf("BODY MASS INDEX\n\n", "");

    
    float weight;
     printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    printf("BMI Calculator\n");
   
getchar();
getchar();
    
    return 0;
}
