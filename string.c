// #include<stdio.h>
// int main(){
//     char str[10];
//     printf("Please enter string: ");
//     scanf("%[^\n]s",str);
//     printf("%s",str);
// }



// #include<stdio.h>
// int main(){
//     int a;
//     printf("%p\n",&a);
// }


// print address in c

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[5]={'a','b','c','d','e'};
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%p\n",&str[i]);
//     }
    
// }



// #include<stdio.h>
// #include<string.h>
// int main(){
   
//    char str[7] = "niksha";

//    for(int i = 0; i < 10; i++){
//     str[i] = str[i] - 32;
//    }
   
//   for (int i = 0; i < 10; i++)
//   {
//     printf("%c",str[i]);
//   }
// }



// #include<stdio.h>
// #include<string.h>
// int main(){
   
//    char str[6] = "NIKSHA";

//    for(int i = 0; i < 7; i++){
//     str[i] = str[i] + 32;
//    }
   
//   for (int i = 0; i < 6; i++)
//   {
//     printf("%c",str[i]);
//    }
  

// }



// #include<stdio.h>
// #include<string.h>
// int main(){
//     int length = strlen("hello world");
//     printf("%d",length);

// }


// #include<stdio.h>
// #include<string.h>
// int main(){
// char str[20] = "Hello World";
// int result = strlen(str);
// printf("%d",result);
// }


// #include<stdio.h>
// #include<string.h>
// int main(){

//     char str[20] = "Hello World";
    
//     printf("%s",strlwr(str));
// }



// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     strcpy(str,"hello");
//     printf("%s",str);
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[20] = "Hello world";
//     printf("%s",str);
// }



// #include<stdio.h>
// #include<string.h>
// int main(){
//     char  str[100] = "Hello World";
//     strcpy(str,"Hey");
//     printf("%s",str);
// }




#include<stdio.h>
#include<string.h>
int main(){
    char str[12] = "Hello world";
    printf("%s",strrev(str));
    
}



// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[5];
//      strcat(str, "world");
//     printf("%s", str);
// }



// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[15] = "Computer";
//     char str1[25] = " Science";
//      strcat(str, str1);
//     printf("%s", str);
// }



// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str1[10], str2[10];
//     printf("Enter 1st string: ");
//     gets(str1);
//     printf("Enter 2nd string: ");
//     gets(str2);
//     if(strcmp(str1,str2)==0)
//        printf("strings are equal");
//     else
//        printf("strings are not equal");
       
//     return 0;

// }



// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[100];
//     int i;
//     printf("Enter a string: ");
//     gets(str);
//     for( int i=0; i<100; i++){
//         printf("%d",str);
//         str[i] = ste[i] - 32;

//     } 
//         printf("string in upper case: %s",str);
        
// }