#include <stdio.h>

void endProgram(){
    printf("\n");
}

int main()
{
    float weight, height;
    printf("Enter your weight: ");
    scanf("%f", &weight);
    printf("Enter your height: ");
    scanf("%f", &height);

    if(weight <= 0 || height <= 0){
        printf("Enter numbers biggers than zero!");
        endProgram();
    }

    float bmi = weight / (height * height);

    if(bmi < 18.5){
        printf("BMI = %.2f\nUnder weight!", bmi);
    } else if(bmi >= 18.6 && bmi <= 24.9){
        printf("BMI = %.2f\nHealthy!", bmi);
    } else if(bmi >= 25 && bmi <= 29.9){
        printf("BMI = %.2f\nExcess weight!", bmi);
    }else if(bmi >= 30 && bmi <= 34.9){
        printf("BMI = %.2f\nGrade I obesity!", bmi);
    }else if(bmi >= 35 && bmi <= 39.9){
        printf("BMI = %.2f\nGrade II obesity!", bmi);
    }else {
        printf("BMI = %.2f\nGrade III obesity!", bmi);
    }
    
    endProgram();
}
