#include <stdio.h>



int main()
{
    double a, b, c, d, e;
    double sum;
    double pr;
    double sub;
    double div;
    int ch;
    printf("Enter  1st number here:\n");
    scanf("%lf",&a);
    printf("Enter  2nd number here:\n");
    scanf("%lf",&b);
    printf("Enter  3rd number here:\n");
    scanf("%lf",&c);
    printf("Enter  4th number here:\n");
    scanf("%lf",&d);
    printf("Enter  5th number here:\n");
    scanf("%lf",&e);
    printf("\nChoose from the five options:\n");
    printf("1==> Add the 1st,2nd and 5th number:\n");
    printf("2==> Multiply 3rd,4th and 5th number:\n");
    printf("3==> Subtract 5th number from the 3rd number:\n");
    printf("4==> Divide the 3rd number by the 1st number:\n");
    printf("5==> Perform all operation above mentioned:\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch(ch)
    {
    case 1:
        printf("\nl. Adding 1st,2nd and 5th number:\n");
        sum=a+b+e;
        printf("sum: %lf\n",sum);
        break;

    case 2:
        printf("\nl. Multiplying 3rd,4th and 5th number:\n");
        pr=c*d*e;
        printf("product: %lf\n",pr);
        break;

    case 3:
        printf("\nl. Subtract 5th number from the 3rd number:\n");
        sub=e-c;
        printf("difference: %lf\n",sub);
        break;

    case 4:
        printf("\nl. Dividing the 3rd number by the 1st number:\n");
        div=c/a;
        printf("quotient:%lf\n",div);
        break;

    case 5:
       printf("\nl. Perform all operation above mentioned:\n");
        sum=a+b+e;
        printf("sum:%0.2lf\n",sum);
        pr=c*d*e;
        printf("product:%0.2lf\n",pr);
        sub=e-c;
        printf("difference:%0.2lf\n",sub);
        div=c/a;
        printf("quotient:%0.2lf\n",div);
        break;
    }

    return 0;
}
