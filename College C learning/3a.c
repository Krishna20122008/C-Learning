#include<stdio.h>
#include<math.h>
int main(){
    // Quadratic equation: ax^2 + bx + c = 0
    float a, b, c;
    printf("Enter the three numbers of quadratic equation: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("The quadratic equation is %.1f x^2 + %.1f x + %.1f\n", a,b,c);

    float D = (b*b) -(4*a*c);
    
    if(D>0){
        float r1 = ((b*(-1))+sqrt(D))/(2*a);
        float r2 = ((b*(-1))-sqrt(D))/(2*a);
        printf("The two roots of the quadratic equation are %.2f and %.2f", r1, r2);
    }
    else if(D<0){
        printf("There are no real roots..");
    }
    else{
        float r1 = b*(-1)/(2*a);
        printf("The two roots are same and they are %.2f and %.2f", r1, r1);
    }
}