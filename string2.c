
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[10];
//     int i;
//     printf("Enter a string: ");
//     gets(str);
//     for( int i=0; i<10; i++){
//         printf("%d",str);
//         str[i] = str[i] - 32;

//     } 
//         printf("string in upper case: %s",str);
        
// }



// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[10], str2[10];
//     printf("Enter 1st string: ");
//     gets(str1);
//     printf("Enter 2nd string: ");
//     gets(str2);
//     if(strcmp(str1, str2)==0)
//       printf("strings are equal");
//     else
//       printf("strings are not equal");

// }



// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[10], str2[10];
//     printf("Enter the 1st string: ");
//     gets(str1);
//     printf("Enter the 2nd string");
//     gets(str2);
//     if(strcmp(str1, str2)==0)
//       printf("strings are equal");
//     else
//       printf("strings are not equal");

// }



// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[10], str2[10];
//     printf("Enter 1st string: ");
//     gets(str1);
//     printf("Enter 2nd string: ");
//     gets(str2);
//     if(strcmp(str1, str2)==0)
//        printf("strings are equal");
//     else
//        printf("strings are not equal");

// } 



//  #include <stdio.h>  
// #include <string.h>  
  
// int main() {  
// char str[100] = "hello world";
// char *sub;  
  
// sub = strstr(str, "world");  
  
// if (sub != NULL) {  
// printf("Substring is: %s", sub);  
// } 
// else {  
// printf("Substring not found.");  
// }  
  
// return 0;  
// } 



// #include<stdio.h>
// int main(){
//     char c;
//     printf("Please enter the character: ");
//     c = getchar();
//     putchar(c);
// }



// #include<stdio.h>
// #include<math.h>
// int main(){
//     printf("\n%f",ceil(3.6));
//     printf("\n%f",floor(3.6));
//     printf("\n%f",abs(-6));
// }  



#include<stdio.h>
int nestedfun(){
    int x = 5;
    int y = 10;
    
    void add(){
        printf("%d\n",x+y);
    }
    void sub(){
        printf("%d\n",x-y);
        add();
    }
    void multiple(){
        printf("%d\n",x*y);
        sub();
    }
    void divide(){
        printf("%d\n",x/y);
        multiple();
    }
    divide();
}
 int main(){
    
    nestedfun();
 }
