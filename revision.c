// #include <stdio.h>
// int main(){
//     int r = 6;
//     for(int i=0; i<r; i++){
//     for(int j=0; j<=i; j++){
//         printf("* ");
//     }
//         printf("\n");
//     }
//         return 0;
// }


// #include <stdio.h>
// int main(){
//     int r = 4;
//     for(int i=0; i<r; i++){
//     for(int j=0;j<=i; j++){
//         printf(" *");
//     }
//         printf("\n");
//     }
//         return 0;
// }



// #include<stdio.h>
// int main(){
//     int r = 8;
//     for(int i=0; i<r; i++){
//     for(int j=0; j<=(r-i)-1; j++){
//         printf(" ");
//     }
//     for(int k=0; k<=i; k++){
//         printf("* ");
//         } 
//         printf("\n"); 
        
//     }
//         return 0;


// }



#include<stdio.h>
int main(){
int r = 6;
   for(int i=0; i<r; i++){
   for(int j=0; j<=2*r-i-1; j++){
    printf(" ");
   }
   for(int k=0; k<r; k++){
    printf("* ");
   }
    printf("\n");
   }
    return 0;
}

