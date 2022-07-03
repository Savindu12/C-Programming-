#include <stdio.h>

// First C Program

//int main() // Define the main function
//{
  //  printf ("Hello World !"); // Display Hello World to the user
//}

//\t - Tab space  sadsadad    asdsaddsa   asdasda
//\n - New Line   dasdasda
  //              asdasdasd

/*
int main()
{

    char string[]  = "Welcome to C programming.";

    printf ("Hello, World! \n");
    printf("%s",string);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  //  return 0;
//}
 // */


//int main ()
//{
  //  printf("\t    * \n");
    //printf("\t   ***  \n");
    //printf("\t  ******  \n");
    //printf("\t ********  \n");
    //printf("\t    *  \n");
    //printf("\t   ***  \n");
//}

//int main()
//{
  //  int Birth_Year, Age;
   // printf ("Enter your Birth Year: ");
    //scanf("%d",&Birth_Year); // Assign user input to variable BirthYear as a interger
    //Age = 2022-Birth_Year; // Age Calculation
    //printf("Your Age is: %d ",Age); // Display the value of Age
//}

//int main ()
//{
  //  int Num1,Num2, Multiplication, Addition, Substraction;
   // float Division;

   // printf ("Enter a value for Num1: ");
   // scanf ("%d",&Num1);

   // printf ("Enter a value for Num2: ");
   // scanf ("%d",&Num2);

   // Addition = Num1 + Num2;
   // Multiplication = Num1 * Num2;
   // Substraction = Num1 - Num2;
   // Division = (float)Num1 / (float)Num2;

   // printf ("Addition Value is : %d \n",Addition);
   // printf ("Multiplication Value is : %d \n",Multiplication);
   // printf ("Substraction Value is : %d \n",Substraction);
   // printf ("Division Value is : %.2f \n",Division);

//}

//int main ()
//{
  //  int x=10;
   // printf("X= %d \n",--x);
    //x-- ;
    //printf("X= %d \n",x);
//}

 // Terrible Mistake

/*int main ()
{
    int Number, count=1, Total=0;
    int Average;

    while ( count < 11 )
    {
        printf ("Enter a value for Number %d: ",count);
        scanf("%d",&Number);

        Total = Total + Number;
        Total += Number;

        count = count + 1 ;
        Count ++
        ++ Count
        Count+=1
    }

    Average = Total/(count-1);

    printf("Average Value is: %d ",Average);

} */

/*
int main ()
{
    int Number, Positive_count=0, Negative_count=0, Zeros_count=0;
    for (int Count =1; Count<=10; Count ++)
    {
        printf("Enter a value for Number %d: ",Count);
        scanf("%d",&Number);
        printf("\n");

        if (Number > 0)
        {
            Positive_count ++;
        }

        else if (Number < 0)
        {
            Negative_count ++;
        }

        else
        {
            Zeros_count ++;
        }
    }

    printf("Number of Positive intergers: %d \n",Positive_count);
    printf("Number of Negative intergers: %d \n",Negative_count);
    printf("Number of Zero values: %d \n",Zeros_count);
}
*/

/*START
    COUNT =1
    IF COUNT < 10
        CALCULATE COUNT = COUNT +1
        DISPLAY COUNT
END */

//String = Single Diamentional Array

//S A V I N D U
//S A V I N D U

    // 0   1   2   3   4  5  6  7  8  9  // Index Value

    // 1   2   3   4   5  6  7  8  9  10  // Element Value


/*

// Single Dimensional Array

int main()
{
    // Array Declaration
    int Numbers[10];
    for (int i=0; i<10; i++)
    {
        printf("Enter a value Element %d : ", i);
        scanf ("%d",&Numbers[i]);
    }

    //Display the Array
    for (int i=0; i<10; i++)
    {
        printf("Index Value: %d , Its Element Value: %d \n",i,Numbers[i]);
    }
} */

/*
int main ()
{
    // Array Declaration with variables
    float prices [10] , max=0, Average, total =0;

    for (int i=0; i<10; i++)
    {
        printf ("Enter price for product %d: ",i+1);
        scanf ("%f",&prices[i]);

        total = total + prices[i];

        if (prices[i]>max)
        {
            max = prices[i];
        }

        printf ("\n");
    }

    Average = total / 10.0;
    printf ("\n");
    for (int i=0; i<10; i++)
    {
        printf ("Product Number: %d \t Product Price: %.2f \n",i+1, prices[i]);
    }

    printf ("Highest Price is: %.2f \n",max);
    printf ("Average Price is: %.2f \n",Average);

} */

/*
int main()
{

    char ssam[]  = "Life is beautiful";

    printf ("Hello, World!");
    printf("%s",ssam);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  //  return 0;
//}

//*/


// Multi Dimensional Array

//Matrix
   // C1  C2  C3
  //  1   2   3 row 1

  //  2   3   4 row 2


    //int Array_Name [2][3]
/*
int main ()
{
    int matrix[2][3], row, column;
    //Data Input for the multi value array
    for (row=0; row<2; row++)
    {
        for (column=0; column<3; column++)
        {
            printf ("Enter value for Row Number %d, Column Number %d :",row+1,column+1);
            scanf ("%d",&matrix[row][column]);
        }
    }

    // Display the values in the multi array

    for (row=0; row<2; row++)
    {
        for (column=0; column<3; column++)
        {
            printf ("%d \t ",matrix[row][column]);
        }
        printf ("\n");
    }
} */

/*
int main()
{
  float a[2][2], b[2][2], result[2][2];

  // Taking input using nested for loop
  printf("Enter elements of 1st matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Enter a%d%d: ", i + 1, j + 1);
      scanf("%f", &a[i][j]);
    }

  // Taking input using nested for loop
  printf("Enter elements of 2nd matrix\n");
  for (int i = 0; i < 2; ++i)
    for (int j = 0; j < 2; ++j)
    {
      printf("Enter b%d%d: ", i + 1, j + 1);
      scanf("%f", &b[i][j]);
    }

  // adding corresponding elements of two arrays
  for (int i = 0; i < 2; ++i) //row
    for (int j = 0; j < 2; ++j) // Column
    {
      result[i][j] = a[i][j] + b[i][j];
    }

  // Displaying the sum
  printf("\nSum Of Matrix: \n");

  for (int i = 0; i < 2; ++i)
  {
      for (int j = 0; j < 2; ++j)
        {
            printf("%.1f \t", result[i][j]);
        }
        printf("\n");
  }

  return 0;
}

*/

// No return type  No Parameters
/*
void print()
{
    printf("Hello World!");
}

int main()
{
    print();
} */

// No return type  With Parameters
/*
void print (int num1, int num2, int num3)
{
    int sum;
    sum= num1+num2+num3;
    printf("Sum value is: %d",sum);
}

int main()
{
    print(2,3,4);
}
*/

// With return type No parameters
/*
int BirthYear ()
{
    int BirthYear, Age;
    printf("Enter your BirthYear: ");
    scanf ("%d",&BirthYear);
    Age = 2022 - BirthYear;
    return Age;
}

int main ()
{
    printf("Your Age is: %d ",BirthYear());
}
*/

// With return type with parameters
/*
int Highest_Num (int num1,int num2, int num3)
{
    int Highest_Num;
    if(num1>num2 && num1>num3)
    {
        Highest_Num = num1;
    }
    else if(num2>num1 && num2>num3)
    {
        Highest_Num = num2;
    }
    else
    {
        Highest_Num = num3;
    }

    return Highest_Num;
}

int main ()
{
    int num1,num2,num3;
    printf("Enter a value for Num1: ");
    scanf("%d",&num1);
    printf("Enter a value for Num2: ");
    scanf("%d",&num2);
    printf("Enter a value for Num3: ");
    scanf("%d",&num3);

    printf ("Highest Value is: %d \n ",Highest_Num(num1,num2,num3));
}
*/

// Pointers
/*
int main ()
{
    int x = 10;
    int *p;

    p = &x;

    printf("The value of X is: %d \n",x);
    printf("The memory address off x is: %p",p);

    int temp
    temp = *x;
    *x = *y;
    *y = temp

    prinl () // Syntax Error
    x=(y)/(5+3); // Semantic Error
}
*/

//Fibonacci Sequence
// 0 1 1 2 3 5 8 13

int main()
{
    int num1=0,num2=1,num3,range;

    printf("Enter the range for sequence: ");
    scanf("%d",&range);

    for (int i=0; i<range; i++)
    {
        num3 = num1 + num2;
        printf("%d \t",num3);
        num1 = num2;
        num2 = num3;

    }
}






