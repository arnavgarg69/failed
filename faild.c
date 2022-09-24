
#include <stdio.h>

float Percentage(float marks);


int main(){
float science;
float math;
float sanskrit ;

printf("Enter the marks of Science \n");
scanf("%f",&science );

// printf ("Enter the marks of math \n");
// scanf("%f",&math );


float far = Percentage(science);
printf("The required percentage is %f \n",Percentage);
 return 0;


}
float Percentage(float marks){
    float percentage = (marks/100)*100;
    return percentage;
}
