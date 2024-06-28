// #include<stdio.h>
// int main(){
//     int i,j,k,r;
//     for(i=0;i<r;i++){
//     for(k=r;k>i+1;k--){
//         printf(" ");
//         }
//     for(j=0;j=i*2;j++){
//         printf("*");
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// int main (){
//     for(int r=0;r<4;r++){
//     for(int s=0;s<3-0;s++){
//         printf(" ");
//     }
//     for(int s=1;s<3-r;s++){
//         printf("%d",s);
//     }
//     for(int s=2;s<3-2;s++){
//         printf("*");
//     }
//     for(int s=3;s<3-3;s++){
//         printf("*");
//     }
//       printf("\n");  
//         }
// }




// #include <stdio.h>
 
// int main()
// {
//     int r;
//     printf("Number of r: ");
//     scanf("%d", &r);
//         for (int i = 1; i <= r; i++) {
//         for (int j = 1; j <= 2 * (r - i); j++) {
//             printf(" ");
//         }
//         for (int k = 1; k < 2 * i; k++) {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int r = 5;
//     // printf("Number of r: ");
//     // scanf("%d", &r);
//     for (int i=1 ; i<=r ; i++) {
//     for (int j=1 ; j<=2*(r-i) ; j++) {
//         printf(" ");
//     }
//     for(int k=1 ; k<2*i ; k++){
//         printf("%d ", i);
//     }
//     printf("\n");
//     }
//     return 0;
// }




// #include<stdio.h>
// int main (){
//     int r = 6;
//     for(int i=0 ; i<r ; i++){
//     for(int j=0 ; j<2*i ; j++){
//         printf(" ");
//         }
//     for(int k=0 ; k<2*(r-i)-1 ; k++){
//         printf("* ");
//     }
//        printf("\n");
//     }
//       return 0;
    
//     }



#include <stdio.h>
int main(){
    int nr = 7,l1,l2,l3,x;
    for(nr=1 ; nr<=+nr ; nr++){
    for(l1=1 ; l1<=nr-1;l1++){
    printf(" ");
    }
    for(l2=1 ; l2<=x-(nr-1)*2 ; l2++){
        printf("*");
    }
      return 0;
    }

}