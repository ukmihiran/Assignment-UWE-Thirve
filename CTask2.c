//C Task 2: Functions, Function arguments
//Student Num: 21058644 

#include <stdio.h>

void evenodd();     // function prototypes

void prime();

void fact();

void fib();

int main()
{
    int n;

    printf("Please Enter number: ");
    scanf("%d",&n);

    evenodd(n);
    prime(n);
    fact(n);
    fib(n);

    return 0;
}

void evenodd(int n)     // function definition
{
    if (n % 2 == 0)
    {
        printf("%d is even\n", n);
    }
    else{
        printf("%d is odd\n", n);
    }    
}

void prime(int n)
{
    int flag = 0;
    int i;
    for (i = 2; i <= n / 2; ++i) {
    // condition for non-prime
    if (n % i == 0) {
      flag = 1;
      break;
    }
  }

  if (n == 1) {
    printf("1 is neither prime nor composite.");
  } 
  else {
    if (flag == 0)
      printf("%d is a prime number.\n", n);
    else
      printf("%d is not a prime number.\n", n);
  }
}

void fact(int n)
{
    int i, f =1 ;

     if (n < 0)     //check negative integer
        printf("Error! given number is negative");
    else {
        for (i = 1; i <= n; ++i) {
            f *= i;
        }
        printf("Factorial of %d = %llu \n", n, f);
    }
    
}

void fib(int n)
{
    int i,c=0;
    int a=0;
    int b=1;
    printf("Fibonacci series for %d terms:- ",n);
    for(i=0;i<n;i++)
    {
       printf("%d ",c);
       a=b;
       b=c;
       c=a+b;
    }
}