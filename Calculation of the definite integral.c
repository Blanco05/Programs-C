#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define E 0.000001

double calculateParabola(float A, float B, float C, float first, float second)
{
    double area = 0.0, i, f;
    for(i = first + E; i <= second; i += (2 * E)){
        f = A * (i * i) + B * i + C;
        area += f * (2 * E);
    }
    return area;
}

double calculateHyperbola(float A, float B, float C, float first, float second)
{
    double area = 0.0, i, f;
    for(i = first + E; i <= second; i += (2 * E)){
        f = 1/(A * (i * i) + B * i + C);
        area += f * (2 * E);
    }
    return area;
}

double calculateLogarithm(float A, float B, float C, float first, float second)
{
    double area = 0.0, i, f;
    for(i = first + E; i <= second; i += (2 * E)){
        f = log(A * (i * i) + B * i + C);
        area += f * (2 * E);
    }
    return area;
}

double calculateExponential(float A, float B, float C, float first, float second)
{
    double area = 0.0, i, f;
    for(i = first + E; i <= second; i += (2 * E)){
        f = exp(A * (i * i) + B * i + C);
        area += f * (2 * E);
    }
    return area;
}

double calculateSquareRoot(float A, float B, float C, float first, float second)
{
    double area = 0.0, i, f;
    for(i = first + E; i <= second; i += (2 * E)){
        f = sqrt((A * (i * i) + B * i + C));
        area += f * (2 * E);
    }
    return area;
}

float parabola(float first, float second)
{
    float A, B, C, area;
    printf("Enter the values of the parabola ax^2 + bx + c\n");
    printf("Enter A: ");
    scanf("%f", &A);
    printf("Enter B: ");
    scanf("%f", &B);
    printf("Enter C: ");
    scanf("%f", &C);
    area = calculateParabola(A, B, C, first, second);
    return area;
}

float hyperbola(float first, float second)
{
    float A, B, C, area;
    printf("Enter the values of the hyperbola of the form 1/(ax^2 + bx + c)\n");
    printf("Enter A: ");
    scanf("%f", &A);
    printf("Enter B: ");
    scanf("%f", &B);
    printf("Enter C: ");
    scanf("%f", &C);
    area = calculateHyperbola(A, B, C, first, second);
    return area;
}

float logarithm(float first, float second)
{
    float A, B, C, area;
    printf("Enter the values of the logarithm of the form ln(ax^2 + bx + c)\n");
    printf("Enter A: ");
    scanf("%f", &A);
    printf("Enter B: ");
    scanf("%f", &B);
    printf("Enter C: ");
    scanf("%f", &C);
    area = calculateLogarithm(A, B, C, first, second);
    return area;
}

double exponential(float first, float second)
{
    float A, B, C;
    double area = 0.0, i, f;
    printf("Enter the values of the exponential of the form e^(ax^2 + bx + c)\n");
    printf("Enter A: ");
    scanf("%f", &A);
    printf("Enter B: ");
    scanf("%f", &B);
    printf("Enter C: ");
    scanf("%f", &C);
    for(i = first + E; i <= second; i += (2 * E)){
        f = exp(A * (i * i) + B * i + C);
        area += f * (2 * E);
    }
    return area;
}

float squareRoot(float first, float second)
{
    float A, B, C, area;
    printf("Enter the values of the square root of the form sqrt(ax^2 + bx + c)\n");
    printf("Enter A: ");
    scanf("%f", &A);
    printf("Enter B: ");
    scanf("%f", &B);
    printf("Enter C: ");
    scanf("%f", &C);
    area = calculateSquareRoot(A, B, C, first, second);
    return area;
}

int main()
{
    float first, second;
    int choice;
    printf("Enter the first value of the interval where you want to calculate the area: ");
    scanf("%f", &first);
    printf("Now enter the second: ");
    scanf("%f", &second);
    printf("\tMENU\n");
    printf("1- Parabola: ax^2 + bx + c\n");
    printf("2- Hyperbola: 1/(ax^2 + bx + c)\n");
    printf("3- Logarithm: ln(ax^2 + bx + c)\n");
    printf("4- Exponential: e^(ax^2 + bx + c)\n");
    printf("5- Square Root: sqrt(ax^2 + bx + c)\n\n");
    printf("Enter the type of function: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("The area under the parabola is: %.2f\n", parabola(first, second));
            break;
        case 2:
            printf("The area under the hyperbola is: %.2f\n", hyperbola(first, second));
            break;
        case 3:
            printf("The area under the logarithm is: %.2f\n", logarithm(first, second));
            break;
        case 4:
            printf("The area under the exponential is: %.2f\n", exponential(first, second));
            break;
        case 5:
            printf("The area under the square root is: %.2f\n", squareRoot(first, second));
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}
