// #include <stdio.h>

// int main() {

//     double a = 10.8578

//     printf("The value of a:%.3lf,a");  
    

// #include <stdio.h>
// #define PI 3.14
// void main()
// {
//     printf("The value of PI is %f,PI")
// }


// #include <stdio.h>

// void main()
// {
//     const int a;
//     printf("Enter the value of a:");
//     scanf("%d",&a);
//     printf("The value of PI is %d",a);
// }


// #include <stdio.h>

// void main() 

// {
//     int a;
//     printf("Enter the value of a");
//     scanf("%d,&a");
//     printf("The value of PI is %.3d",a);
// }




// void main()

// {
//     char a;
//     printf("Enter the value of a",);
//     scanf("%c",&a);
//     printf("The value of PI is %.3d",a);
// }




// #include <stdio.h>

// int main ()

// {

// int a = 10;

// x = --a

// printf("%d",b);

// }



// #include <stdio.h>

// int main()

// {

// int i = 2,k;

// k = ++i * ++i * i++;

// printf("%d/n",i);
// printf("%d",k);

// } 




// #include<stdio.h>

// int main (){

// int a;

// printf("Please enter the number");
// scanf("%d",&a);

// if (a%2==0); {

//    printf("It is even number\n");
// }


//     printf("It is odd number");
// }
    



// #include<stdio.h>

// int main (){

//     int year;
//     printf("Enter a year: ");
//     scanf("%d",&year);
    
//     if (year%400==0){

//         printf("Leap year");

//     }

//     else if (year%4==0 || year%100!=0){
    

//         printf("Leap year");

//     }

// else {

//      printf("Not a leap year");

// }


// }



// #include <stdio.h>

// int main() {    

// int i = 4;

// int n;
// scanf("%d,&n");

// int sum = n*(n+1)/2;

// printf("The sum is %d,sum");

// return 0;

// }



// #include <stdio.h>

// int main ();

// {
//   int number;

// printf("Please enter the value of a: ");
// scanf("%d",&num);

// if((number%2==0) ? 1 : 0)

// {
//     printf("Even number");

// }

// else {
    
//     printf("Odd number");

// }

//    return 0;

// }




// 



// #include <stdio.h>
// int main(){
//     int num1, num2;
//     float result;
//     char ch;
//     printf("Enter first number = ");
//     scanf("%d",&num1);
//     printf("Enter second number = ");
//     scanf("%d",&num2);
//     printf("Choose operator to perform operations = ");
//     scanf(" %c",&ch);
//     result = 0;
//     switch (ch)
//       {
//       case '+':
//         result = num1 + num2;
//         break;

//       case '-':
//          result = num1 - num2;
//          break;

//       case '*':
//         result = num1 * num2;
//         break;

//       case '/' :
//         result = num1 / num2;
//         break;
//       default:
//         printf ("Invalid operation\n");
//       }
//     printf ("Result: %d %c %d = %f\n", num1, ch, num2, result);
//     return 0;
//   }                



// #include <stdio.h>
// int main(){
//     float c;
//      printf("The temperature in celcius");
//       scanf(" %f",&c);
//       float result=((c*9)/5+32);
//       printf("foreign height value=%f",result);
//       return 0;
// }          





// #include<stdio.h>
// int main(){
//     int num1, num2, num3;

//     num1=12,num2=17,num3=19;
    
//     if(num1 >= num2 && num1 >= num3) {
//           printf("%d is the greatest", num1);
//     }

//     else if(num2 >= num1 && num2 >= num3) {
//           printf("%d is the greatest", num2);
//     }
//     else if(num3 >= num1 && num3 >= num2){
//           printf("%d is the greatest", num3);
//     }
//     return 0;
// }         








// #include <stdio.h>

// int main()
// {
//     int a, b, c;

//     printf("Enter two angles of triangle: ");
//     scanf("%d%d", &a, &b);

//     c = 180 - (a + b);

//     printf("Third angle of the triangle = %d", c);

//     return 0;
// }







// #include <stdio.h>
// int main(){
//     float basic, da, hra, gross_salary;
    
//     printf("Enter the basic: ");
//     scanf("%f",&basic);
     
//     if(basic<=25000){
//         da = (basic*10)/100;
//         hra = (basic*15)/100;
//     }

//     else if(basic<=40000){
//         da = (basic*12)/100;
//         hra = (basic*18)/100;
//     }

//     gross_salary = basic + hra + da;

//     printf("Gross salary is : %f", gross_salary);
//     return 0;

// }




