#include<stdio.h>
#include<math.h>
int main(){
    float fahrenheit,celsius;
    printf("Enter temperature in celsius :");
    scanf("%f",&celsius);
     
    fahrenheit = (celsius * 9 / 5) + 32;
    
    printf("%.2f\n",celsius);
    printf("%.2f\n",fahrenheit);
    
    return 0;
}
