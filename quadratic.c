/* Program to find the roots of a quadratic equation
    ax^2 + bx +c=0
    a is the coefficient of x^2
    b is the coefficient of x
    c is the constant
*/
#include <stdio.h>
#include <math.h>
#include<complex.h>
int main(){
    double a,b,c,discriminant,x1,x2;
    printf("Enter the coefficient of the x^2: "); 
    scanf("%lf",&a);
    printf("Enter the coefficient of the x: "); 
    scanf("%lf",&b);
    printf("Enter the constant: "); 
    scanf("%lf",&c);
    discriminant=pow(b,2)-(4*a*c);
    if (discriminant>0){
        printf("The roots an real and distint\n");
        x1= ((-b)+sqrt(discriminant))/(2*a);
        x2= ((-b)-sqrt(discriminant))/(2*a);
        printf("First root is x1=%.2lf\t",x1);
        printf("Second root is x2=%.2lf\t",x2);
    } 
    if (discriminant==0){
        printf("The roots are real and distint\n");
        x1= ((-b)+sqrt(discriminant))/(2*a);
        x2= ((-b)-sqrt(discriminant))/(2*a);
        printf("First root is x1=%.2lf\n",x1);
        printf("Second root is x2=%.2lf\n",x2);
    } 
if (discriminant<0){
    printf("The roots are complex\n");
        x1= ((-b)+sqrt(-discriminant))/(2*a);
        x2= ((-b)-sqrt(-discriminant))/(2*a);
        printf("First root is x1=%.2lfi %+.2lfj\t",creal(x1),cimag(x1));
        printf("Second root is x2=%.2lfi %+.2lfj\t\n",creal(x2),cimag(x2));
}
    return 0;
}