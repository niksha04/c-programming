// #include <stdio.h>
// int main() {
//     int num = 1;
//     printf("Odd numbers between 1 to 100");
//     while(num <= 100) {
//         if(num % 2 !=0) {
//             printf("%d", num);
//             }
//         num++;
//     }
//      printf("\n");
//      return 0;

//     }



// #include <stdio.h>
// int main() {
//     int num, count = 0, temp;
//     printf("Enter a number: ");
//     scanf("%d", &num);
//     temp = num;
//     while (temp != 0) {
//         temp /= 10;
//         count++;
//     }
//     printf("The number of digits in %d is: %d\n", num, count);
//     return 0;
// }




// #include <stdio.h>
// int main () {
//     int n,num = 1;
//     printf("Enter the value of n: ");
//     scanf("%d",&n);
//     while(num <= n){
//         printf("%d",num);
//         num++;
//     }
//      printf("\n");
//      return 0;
    
// }



// #include <stdio.h>
// int main(){
// int i=8;
//     do{
//         printf("This is a loop body");
//     }
//     while(i<=5);
//     return 0;
// } 



// #include <stdio.h>
// int main (){
//     int i = 15;
//     do{
//         printf("geeks\n");
//     }
//     while(i < 5);
//     return 0;
// }


// #include<stdio.h>
// int main(){
    
//     for(int i=1;i<5;i++){
//     for(int j=1;j<5;j++){
//         printf("*");
//     }
//      printf("\n");   
//     }
    

// }



#include<stdio.h>
int main(){
    for(int r=1;r<=5;r++){
    for(int c=1;c<=r;c++){
        printf("%d",c);
    }
    printf("\n");
    }
}