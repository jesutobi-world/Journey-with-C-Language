// C program to solve a quadratic equation given the coefficients
#include <stdio.h>
#include <math.h>
#include <complex.h>
int main(){
    double a;
    double b;
    double c;
    char response[3];
    double ans1;
    double ans2;
    
    if (response != "1"){
        printf("Using the form of  ap2 + bp + c = 0\n");
        printf("Enter the coefficient of the quadratic term (a):");
        scanf("%lf.\n", &a);
        printf("Enter the coefficient of the linear term (b): ");
        scanf("%lf.\n", &b);
        printf("Enter the constant (c): ");
        scanf("%lf.\n", &c);
        printf("Is your equation ");
        printf("%lf", a);
        printf("p2 + ");
        printf("%lf", b);
        printf("p + %lf? \n", c);
        printf("Enter your response ( 1 for yes) or (0 for no): ");
        scanf("%s", &response);
    }
    double discriminant = (b * b) - (4 * a * c);
    if (discriminant >= 0){
        ans1 = ((-1 * b) + sqrt(discriminant)) / (2 * a);
        ans2 = ((-1 * b) - sqrt(discriminant)) / (2 * a);
        printf("The solution to your equation is: %lf ", ans1);
        printf("and %lf", ans2);
    }
    // Complex roots section
    else{
        printf("Your eqaution has complex roots.");
        double imaginary = sqrt(-discriminant)/(a+a);
        double real = -b/(a+a);
        printf("Root 1 is %lf + %lfi \n",real, imaginary);
        printf("Root 2 is %lf - %lfi",real, imaginary);
    }
    return 0;
}
