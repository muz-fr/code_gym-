#include <stdio.h>

int main(){

    int Height = 0;
    float Weight = 0;
    int age  = 0;
    float BMR = 0;
    char gender = '\0';
    int activity_level;

    printf("TDEE Calculator\n");

    printf("\nA TDEE calculator is a digital tool that estimates the total number of calories your body burns in a 24-hour period. It serves as your daily energy budget and acts as your baseline for maintenance calories.\n");
    
    printf("\nEnter your Height(in cm) = ");
    scanf("%d",&Height);

    printf("Enter your Weight(in kg) = ");
    scanf("%f",&Weight);  

    printf("Enter your age = ");
    scanf("%d",&age); 

    printf("Choose an activity level from 1-5\n(1 being least active - 5 being highly active)\n");
    scanf("%d",&activity_level);

    printf("Gender (m/f)\n");
    scanf(" %c", &gender);  // Note the space before %c to consume any leftover newline character

    if(activity_level==1){
        if(gender == 'm'){
            BMR = (float)(((10 * Weight) + (6.25 * Height) - (5 * age) + 5 )* 1.2);
            printf("BMR = %.2f kcal",BMR);
        }
        else{
            BMR = (float)(((10 * Weight) + (6.25 * Height) - (5 * age) - 161 )* 1.2);
            printf("BMR = %.2f kcal",BMR);
        }    
    }
    else if(activity_level==2){
        if(gender == 'm'){
            BMR = (float)(((10 * Weight) + (6.25 * Height) - (5 * age) + 5 )* 1.2);
            printf("BMR = %.2f kcal",BMR);
        }
        else{
            BMR = (float)(((10 * Weight) + (6.25 * Height) - (5 * age) - 161 )* 1.2);
            printf("BMR = %.2f kcal",BMR);
        }    
    }
    else if(activity_level==3){
        if(gender == 'm'){
            BMR = (float)(((10 * Weight) + (6.25 * Height) - (5 * age) + 5 )* 1.55);
            printf("BMR = %.2f kcal",BMR);
        }
        else{
            BMR = (float)(((10 * Weight) + (6.25 * Height) - (5 * age) - 161 )* 1.55);
            printf("BMR = %.2f kcal",BMR);
        }
    }
    else if(activity_level==4){
        if(gender == 'm'){
            BMR = (float)(((10 * Weight) + (6.25 * Height) - (5 * age) + 5 )* 1.725);
            printf("BMR = %.2f kcal",BMR);
        }
        else{
            BMR = (float)(((10 * Weight) + (6.25 * Height) - (5 * age) - 161 )* 1.725);
            printf("BMR = %.2f kcal",BMR);
        }
    }
    else if(activity_level==5){
        if(gender == 'm'){
            BMR = (float)(((10 * Weight) + (6.25 * Height) - (5 * age) + 5 )* 1.9);
            printf("BMR = %.2f kcal",BMR);
        }
        else{
            BMR = (float)(((10 * Weight) + (6.25 * Height) - (5 * age) - 161 )* 1.9);
            printf("BMR = %.2f kcal",BMR);
        }
    }
    else{
        printf("Invalid input");
    }
    
    return 0;

}