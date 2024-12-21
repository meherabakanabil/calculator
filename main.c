#include <stdio.h>
#include <math.h>

int main() {
    int front_ops, real_ops, complex_ops, matrix_ops, rows, rows2, cols, cols2, i, j, k;
    float a, b, c, d, e, f, g, h;

    front_page:
    printf("The front page of calculator:\n1. Operations on real numbers\n2. Operations on complex numbers\n3. Operations on matrices\n4. Quit\nEnter an option number to proceed: ");
    scanf("%d", &front_ops);
    printf("\n\n");

      switch(front_ops)
      {
        case 1:
            real_ops_page:
            printf("The calculator set on operations on real numbers mode:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Solution of a quadratic equation\n6. Return to front page\nEnter an option number to proceed: ");
            scanf("%d", &real_ops);

            switch(real_ops)
            {
            case 1:
                printf("Enter first number: ");
                scanf("%f", &a);
                printf("Enter second number: ");
                scanf("%f", &b);
                printf("Result: %.2f\n\n\n", a + b);
                goto real_ops_page;
                break;

            case 2:
                printf("Enter first number: ");
                scanf("%f", &a);
                printf("Enter second number: ");
                scanf("%f", &b);
                printf("Result: %.2f\n\n\n", a - b);
                goto real_ops_page;
                break;

            case 3:
                printf("Enter first number: ");
                scanf("%f", &a);
                printf("Enter second number: ");
                scanf("%f", &b);
                printf("Result: %.2f\n\n\n", a * b);
                goto real_ops_page;
                break;

            case 4:
                printf("Enter first number: ");
                scanf("%f", &a);
                printf("Enter second number: ");
                scanf("%f", &b);
                if(b!=0)
                {
                    printf("Result: %.2f\n\n\n", a / b);
                    goto real_ops_page;
                    break;
                }
                else
                {
                    printf("Can't be divided by 0\n\n\n");
                    goto real_ops_page;
                    break;
                }

            case 5:
                printf("Enter coefficient value of a: ");
                scanf("%f", &a);
                printf("Enter coefficient value of b: ");
                scanf("%f", &b);
                printf("Enter coefficient value of c: ");
                scanf("%f", &c);

                d = b * b - 4 * a * c;

                if(d < 0)
                {
                    printf("Result: This mode only works for real number roots\n\n\n");
                    goto real_ops_page;
                    break;
                }
                else
                {
                    printf("Result: Roots are  %.2f, %.2f\n\n\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
                    goto real_ops_page;
                    break;
                }

            case 6:
                printf("\n\n");
                goto front_page;
                break;

            default:
                printf("\n\n");
                printf("Your chosen option doesn't exist! Choose again\n\n\n");
                goto real_ops_page;
            }
            break;

        case 2:
            complex_ops_page:
            printf("The calculator set on operations on complex numbers mode:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Complex Conjugate\n6. Solution of a quadratic equation\n7. Return to front page\nEnter an option number to proceed: ");
            scanf("%d", &complex_ops);

            switch(complex_ops)
            {
                case 1:
                    printf("Enter the real part of first term: ");
                    scanf("%f", &a);
                    printf("Enter the imaginary part of first term: ");
                    scanf("%f", &b);
                    printf("Enter the real part of second term: ");
                    scanf("%f", &c);
                    printf("Enter the imaginary part of second term: ");
                    scanf("%f", &d);

                    if(b<0 && d<0)
                        {
                            printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, a + c, b + d);
                        }
                    else if(b<0 && d>0)
                        {
                            printf("First number: %.2f%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f+(%.2f)i\n\n\n", a, b, c, d, a + c, b + d);
                        }
                    else if(b>0 && d<0)
                        {
                            printf("First number: %.2f+%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, a + c, b + d);
                        }
                     else
                        {
                            printf("First number: %.2f+%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f+(%.2f)i\n\n\n", a, b, c, d, a + c, b + d);
                        }

                     goto complex_ops_page;
                     break;

                case 2:
                    printf("Enter the real part of first term: ");
                    scanf("%f", &a);
                    printf("Enter the imaginary part of first term: ");
                    scanf("%f", &b);
                    printf("Enter the real part of second term: ");
                    scanf("%f", &c);
                    printf("Enter the imaginary part of second term: ");
                    scanf("%f", &d);

                    if(b<0 && d<0)
                        {
                            printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a - c, b - d);
                        }
                    else if(b<0 && d>0)
                        {
                            printf("First number: %.2f%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, a - c, b - d);
                        }
                    else if(b>0 && d<0)
                        {
                            printf("First number: %.2f+%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a - c, b - d);
                        }
                    else
                        {
                            printf("First number: %.2f+%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, a - c, b - d);
                        }

                    goto complex_ops_page;
                    break;

                case 3:
                    printf("Enter the real part of first term: ");
                    scanf("%f", &a);
                    printf("Enter the imaginary part of first term: ");
                    scanf("%f", &b);
                    printf("Enter the real part of second term: ");
                    scanf("%f", &c);
                    printf("Enter the imaginary part of second term: ");
                    scanf("%f", &d);

                    if(a>0 && b>0 && c>0 && d>0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a>0 && b<0 && c>0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b>0 && c>0 && d>0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b<0 && c>0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if(a>0 && b>0 && c<0 && d>0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a>0 && b<0 && c<0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b>0 && c<0 && d>0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b<0 && c<0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a>0 && b<0 && c>0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b>0 && c>0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b<0 && c>0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if(a>0 && b>0 && c<0 && d>0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a>0 && b<0 && c<0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b>0 && c<0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b<0 && c<0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if(a>0 && b>0 && c>0 && d<0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a>0 && b<0 && c>0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b>0 && c>0 && d<0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b<0 && c>0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if(a>0 && b>0 && c<0 && d<0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a>0 && b<0 && c<0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b>0 && c<0 && d<0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b<0 && c<0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if(a>0 && b>0 && c>0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a>0 && b<0 && c>0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b>0 && c>0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b<0 && c>0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if(a>0 && b>0 && c<0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a>0 && b<0 && c<0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else if (a<0 && b>0 && c<0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }
                    else
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, a*c - b*d, a*d + b*c);
                    }

                    goto complex_ops_page;
                    break;

                case 4:
                    printf("Enter the real part of first term: ");
                    scanf("%f", &a);
                    printf("Enter the imaginary part of first term: ");
                    scanf("%f", &b);
                    printf("Enter the real part of second term: ");
                    scanf("%f", &c);
                    printf("Enter the imaginary part of second term: ");
                    scanf("%f", &d);

                    if(a>0 && b>0 && c>0 && d>0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a>0 && b<0 && c>0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b>0 && c>0 && d>0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b<0 && c>0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if(a>0 && b>0 && c<0 && d>0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a>0 && b<0 && c<0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b>0 && c<0 && d>0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b<0 && c<0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f+%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a>0 && b<0 && c>0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b>0 && c>0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b<0 && c>0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if(a>0 && b>0 && c<0 && d>0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a>0 && b<0 && c<0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b>0 && c<0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b<0 && c<0 && d>0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if(a>0 && b>0 && c>0 && d<0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a>0 && b<0 && c>0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b>0 && c>0 && d<0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b<0 && c>0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if(a>0 && b>0 && c<0 && d<0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a>0 && b<0 && c<0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b>0 && c<0 && d<0)
                    {
                        printf("First number: %.2f+%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b<0 && c<0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if(a>0 && b>0 && c>0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a>0 && b<0 && c>0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b>0 && c>0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b<0 && c>0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if(a>0 && b>0 && c<0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a>0 && b<0 && c<0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else if (a<0 && b>0 && c<0 && d<0)
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }
                    else
                    {
                        printf("First number: %.2f%.2fi\nSecond number: %.2f%.2fi\nResult: %.2f+%.2fi\n\n\n", a, b, c, d, (a*c + b*d)/(c*c + d*d), (b*c - a*d)/(c*c + d*d));
                    }

                    goto complex_ops_page;
                    break;

                case 5:
                    printf("Enter the real part of first term: ");
                    scanf("%f", &a);
                    printf("Enter the imaginary part of first term: ");
                    scanf("%f", &b);

                    if(b>0)
                    {
                        printf("Complex number: %.2f+%.2fi\nComplex conjugate: %.2f%.2fi\n\n\n", a, b, a, b*-1);
                        goto complex_ops_page;
                        break;
                    }
                    else
                    {
                        printf("Complex number: %.2f%.2fi\nComplex conjugate: %.2f+%.2fi\n\n\n", a, b, a, b*-1);
                        goto complex_ops_page;
                        break;
                    }

                case 6:
                    printf("Enter coefficient value of a: ");
                    scanf("%f", &a);
                    printf("Enter coefficient value of b: ");
                    scanf("%f", &b);
                    printf("Enter coefficient value of c: ");
                    scanf("%f", &c);

                    d = b * b - 4 * a * c;
                    g = (b * b - 4 * a * c) * -1;
                    h = ((-b)/(2*a));
                    e = (sqrt(g)) / (2 * a);
                    f = -(sqrt(g)) / (2 * a);

                   if(d >= 0)
                   {
                       printf("Result: This mode only works for complex number roots\n\n\n");
                       goto complex_ops_page;
                       break;
                   }
                   else
                   {
                       if(e<0 && f<0)
                       {
                           printf("Result: Roots are  %.2f%.2fi, %.2f%.2fi\n\n\n", h, e, h, f);
                       }
                       else if(e>0 && f<0)
                       {
                           printf("Result: Roots are  %.2f+%.2fi, %.2f%.2fi\n\n\n", h, e, h, f);
                       }
                       else if(e<0 && f>0)
                       {
                           printf("Result: Roots are  %.2f%.2fi, %.2f+%.2fi\n\n\n", h, e, h, f);
                       }
                       else
                       {
                           printf("Result: Roots are  %.2f+%.2fi, %.2f+%.2fi\n\n\n", h, e, h, f);
                       }

                       goto complex_ops_page;
                       break;
                   }

                case 7:
                   printf("\n\n");
                   goto front_page;
                   break;

                default:
                    printf("\n\n");
                    printf("Your chosen option doesn't exist! Choose again\n\n\n");
                    goto complex_ops_page;
            }
            break;

        case 3:
            {
            matrix_ops_page:
            printf("The calculator set on operations on matrix mode:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Multiplication by corresponding elements\n5. Transpose Matrix\n6. Return to front page\nEnter an option number to proceed: ");
            scanf("%d",&matrix_ops);

            switch(matrix_ops)
            {
            case 1:
                {
                    printf("Enter the number of X matrix row: ");
                    scanf("%d", &rows);
                    printf("Enter the number of X matrix column: ");
                    scanf("%d", &cols);
                    printf("Enter the number of Y matrix row: ");
                    scanf("%d", &rows2);
                    printf("Enter the number of Y matrix column: ");
                    scanf("%d", &cols2);

                    if(rows==rows2 && cols==cols2)
                    {
                        float matrixX[rows][cols], matrixY[rows][cols], sum[rows][cols];

                        printf("\nEnter elements of the first matrix (X):\n");
                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                printf("Enter element X[%d][%d]: ", i + 1, j + 1);
                                scanf("%f", &matrixX[i][j]);
                            }
                        }

                        printf("\nEnter elements of the second matrix (Y):\n");
                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                printf("Enter element Y[%d][%d]: ", i + 1, j + 1);
                                scanf("%f", &matrixY[i][j]);
                            }
                        }

                        printf("\nMatrix X:\n");
                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                printf("%.2f\t", matrixX[i][j]);
                                if (j == cols - 1)
                                {
                                    printf("\n");
                                }
                            }
                        }

                        printf("\nMatrix Y:\n");
                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                printf("%.2f\t", matrixY[i][j]);
                                if (j == cols - 1)
                                {
                                    printf("\n");
                                }
                            }
                        }

                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                sum[i][j] = matrixX[i][j] + matrixY[i][j];
                            }
                        }

                        printf("\nResult (X + Y):\n");
                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                printf("%.2f\t", sum[i][j]);
                                if (j == cols - 1)
                                {
                                    printf("\n");
                                }
                            }
                        }
                        printf("\n\n");
                    }
                    else
                    {
                        printf("The dimensions of X and Y are not matched, addition is not possible\n\n\n");
                    }

                    goto matrix_ops_page;
                    break;
                 }

            case 2:
                {
                    printf("Enter the number of X matrix row: ");
                    scanf("%d", &rows);
                    printf("Enter the number of X matrix column: ");
                    scanf("%d", &cols);
                    printf("Enter the number of Y matrix row: ");
                    scanf("%d", &rows2);
                    printf("Enter the number of Y matrix column: ");
                    scanf("%d", &cols2);

                    if(rows==rows2 && cols==cols2)
                    {
                        float matrixX[rows][cols], matrixY[rows][cols], sum[rows][cols];
                        printf("\nEnter elements of the first matrix (X):\n");
                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                printf("Enter element X[%d][%d]: ", i + 1, j + 1);
                                scanf("%f", &matrixX[i][j]);
                            }
                        }

                        printf("\nEnter elements of the second matrix (Y):\n");
                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                printf("Enter element Y[%d][%d]: ", i + 1, j + 1);
                                scanf("%f", &matrixY[i][j]);
                            }
                        }

                        printf("\nMatrix X:\n");
                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                printf("%.2f\t", matrixX[i][j]);
                                if (j == cols - 1)
                                {
                                    printf("\n");
                                }
                            }
                        }

                        printf("\nMatrix Y:\n");
                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                printf("%.2f\t", matrixY[i][j]);
                                if (j == cols - 1)
                                {
                                    printf("\n");
                                }
                            }
                        }

                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                sum[i][j] = matrixX[i][j] - matrixY[i][j];
                            }
                        }

                        printf("\nResult (X - Y):\n");
                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                printf("%.2f\t", sum[i][j]);
                                if (j == cols - 1)
                                {
                                    printf("\n");
                                }
                            }
                        }
                        printf("\n\n");
                    }
                    else
                    {
                        printf("The dimensions of X and Y are not matched, subtraction is not possible\n\n\n");
                    }

                    goto matrix_ops_page;
                    break;
                }

            case 3:
                {
                    printf("Enter the number of rows for the first matrix (X): ");
                    scanf("%d", &rows);
                    printf("Enter the number of columns for the first matrix (X): ");
                    scanf("%d", &cols);
                    printf("Enter the number of rows for the second matrix (Y): ");
                    scanf("%d", &rows2);
                    printf("Enter the number of columns for the second matrix (Y): ");
                    scanf("%d", &cols2);

                    if (cols != rows2)
                    {
                        printf("The dimensions of X and Y are not matched, multiplication is not possible\n\n\n");
                        goto matrix_ops_page;
                    }

                    float matrixX[rows][cols], matrixY[rows2][cols2], product[rows][cols2];

                    printf("\nEnter elements of the first matrix (X):\n");

                    for (i = 0; i < rows; i++)
                    {
                        for (j = 0; j < cols; j++)
                        {
                            printf("Enter element X[%d][%d]: ", i + 1, j + 1);
                            scanf("%f", &matrixX[i][j]);
                        }
                    }

                    printf("\nEnter elements of the second matrix (Y):\n");

                    for (i = 0; i < rows2; i++)
                    {
                        for (j = 0; j < cols2; j++)
                        {
                            printf("Enter element Y[%d][%d]: ", i + 1, j + 1);
                            scanf("%f", &matrixY[i][j]);
                        }
                    }

                    printf("\nMatrix X:\n");

                    for (i = 0; i < rows; i++)
                    {
                        for (j = 0; j < cols; j++)
                        {
                            printf("%.2f\t", matrixX[i][j]);

                            if (j == cols - 1)
                            {
                                printf("\n");
                            }
                        }
                    }

                    printf("\nMatrix Y:\n");
                    for (i = 0; i < rows2; i++)
                    {
                        for (j = 0; j < cols2; j++)
                        {
                            printf("%.2f\t", matrixY[i][j]);

                            if (j == cols2 - 1)
                            {
                                printf("\n");
                            }
                        }
                   }

                   for (i = 0; i < rows; i++)
                   {
                       for (j = 0; j < cols2; j++)
                       {
                           product[i][j] = 0;
                       }
                   }

                   for (i = 0; i < rows; i++)
                   {
                       for (j = 0; j < cols2; j++)
                       {
                           for (k = 0; k < cols; ++k)
                           {
                               product[i][j] += matrixX[i][k] * matrixY[k][j];
                           }
                       }
                   }

                   printf("\nResult (X * Y):\n");

                   for (i = 0; i < rows; i++)
                   {
                       for (j = 0; j < cols2; j++)
                       {
                           printf("%.2f\t", product[i][j]);

                           if (j == cols2 - 1)
                            {
                                printf("\n");
                            }
                       }
                   }

                    printf("\n\n");

                    goto matrix_ops_page;
                    break;
                }

            case 4:
                {
                    printf("Enter the number of X matrix row: ");
                    scanf("%d", &rows);
                    printf("Enter the number of X matrix column: ");
                    scanf("%d", &cols);
                    printf("Enter the number of Y matrix row: ");
                    scanf("%d", &rows2);
                    printf("Enter the number of Y matrix column: ");
                    scanf("%d", &cols2);

                    if(rows==rows2 && cols==cols2)
                    {
                        float matrixX[rows][cols], matrixY[rows][cols], product[rows][cols];

                        printf("\nEnter elements of the first matrix (X):\n");

                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                printf("Enter element X[%d][%d]: ", i + 1, j + 1);
                                scanf("%f", &matrixX[i][j]);
                            }
                        }

                        printf("\nEnter elements of the second matrix (Y):\n");

                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                printf("Enter element Y[%d][%d]: ", i + 1, j + 1);
                                scanf("%f", &matrixY[i][j]);
                            }
                        }

                        printf("\nMatrix X:\n");

                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                printf("%.2f\t", matrixX[i][j]);

                                if (j == cols - 1)
                                {
                                    printf("\n");
                                }
                            }
                        }

                        printf("\nMatrix Y:\n");

                        for (i = 0; i < rows; i++)
                        {
                            for (j = 0; j < cols; j++)
                            {
                                printf("%.2f\t", matrixY[i][j]);

                                if (j == cols - 1)
                                {
                                    printf("\n");
                                }
                            }
                         }

                          for (i = 0; i < rows; i++)
                          {
                              for (j = 0; j < cols; j++)
                              {
                                  product[i][j] = matrixX[i][j] * matrixY[i][j];
                              }
                          }

                          printf("\nResult (X * Y) by corresponding elements:\n");
                          for (i = 0; i < rows; i++)
                          {
                              for (j = 0; j < cols; j++)
                              {
                                  printf("%.2f\t", product[i][j]);

                                  if (j == cols - 1)
                                  {
                                      printf("\n");
                                  }
                              }
                          }
                          printf("\n\n");
                    }
                    else
                    {
                        printf("The dimensions of X and Y are not matched, multiplication by elements is not possible\n\n\n");
                    }

                    goto matrix_ops_page;
                    break;
                }

            case 5:
                {
                    printf("Enter the number of rows: ");
                    scanf("%d", &rows);
                    printf("Enter the number of columns: ");
                    scanf("%d", &cols);

                    float matrixX[rows][cols], transpose[cols][rows];

                    printf("\nEnter elements of the matrix X:\n");
                    for (i = 0; i < rows; i++)
                    {
                        for (j = 0; j < cols; j++)
                        {
                            printf("Enter element X[%d][%d]: ", i + 1, j + 1);
                            scanf("%f", &matrixX[i][j]);
                        }
                    }

                    printf("\nMatrix X:\n");

                    for (i = 0; i < rows; i++)
                    {
                        for (j = 0; j < cols; j++)
                        {
                            printf("%.2f\t", matrixX[i][j]);

                            if (j == cols - 1)
                            {
                                printf("\n");
                            }
                        }
                    }

                    for (i = 0; i < rows; i++)
                    {
                        for (j = 0; j < cols; j++)
                        {
                            transpose[j][i] = matrixX[i][j];
                        }
                    }

                    printf("\nResult X^T:\n");

                    for (i = 0; i < cols; i++)
                    {
                        for (j = 0; j < rows; j++)
                        {
                            printf("%.2f\t", transpose[i][j]);

                            if (j == rows - 1)
                            {
                                printf("\n");
                            }
                        }
                    }

                    printf("\n\n");

                    goto matrix_ops_page;
                    break;
                }

            case 6:
                printf("\n\n");
                goto front_page;
                break;

            default:
                printf("\n\n");
                printf("Your chosen option doesn't exist! Choose again\n\n\n");
                goto matrix_ops_page;
            }

            break;
            }

        case 4:
            goto quit;
            break;

        default:
            printf("Your chosen option doesn't exist! Choose again\n\n\n");
            goto front_page;
        }

        quit:
    return 0;
}
