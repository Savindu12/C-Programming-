#include <stdio.h>

// First C Program

//int main() // Define the main function
//{
  //  printf ("Hello World !"); // Display Hello World to the user
//}

//\t - Tab space  sadsadad    asdsaddsa   asdasda
//\n - New Line   dasdasda
  //              asdasdasd

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

int main()
{

    char ssam[]  = "Life is beautiful";

    printf ("Hello, World!");
    printf("%s",ssam);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}













