/* Input would be (name) & birth-year also current year but output should have to be like My name is ... 
   & My age is ....
*/
#include<stdio.h>

 
 int main ()
 {
    int  age,num1,num2, out;
    char name [20];

    printf ("Enter your name :");
    fgets(name,20,stdin);

    printf ("Enter current year : ");
    scanf ("%d",&num1);

    printf ("Enter your birth-year : ");
    scanf ("%d",&num2);


    printf ("My name is %s",name);
     
     age= num1-num2;

     printf ("My current age is : %d",age);

     scanf("%d",&out);
     return 0;

 }