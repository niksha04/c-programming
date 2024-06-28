// #include<stdio.h>
// int main(){
// int i=0;
// int marks[6]={20,30,40,50,60,70};
// for(int i=0; i<6; i++){
// printf("%d\n",marks[i]);
// }
//  return 0;
// }


// pending code
// #include<stdio.h>
// int main(){
// int arr[] = {5, 10, 15, 20, 25, 30};
// int i = (arr)/(arr[0]);
// printf("The smallest : %d", smallest(arr,i));
// }


// pending code 
// #include <stdio.h>

// int getSmallest(int arr[], int len)
// {
//     int min = arr[0];
//     for(int i=1; i < len; i++)
//     {
        
//      if (arr[i] < min)
//             min = arr[i];
//     }
    
//     return min;
    
//     int main(){
//     int arr[] = {5, 8, 7, 2, 12, 4};
//     int len = sizeof(arr)/sizeof(arr[0]);    
//     printf("The smallest : %d", getSmallest(arr, len));
//     }
// }
// }



// #include<stdio.h>
// int main(){
// int i=0,j=0;
// int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
// for(i=0; i<4; i++);
// for(j=0; j<3; j++);
// printf("arr[%d][%d]=%d\n",);
// }


// #include<stdio.h>
// int main(){
// char ch[]="Niksha garnara";
// printf("%s",ch);
// }


// #include<stdio.h>
// #include<string.h>

// int main(){
//     char ch[12] = "Hello world";
//     for(int i=0; i<12; i++){
//        printf("%c",ch[i]);
//     }
      
//     }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char ch[12] = "Hello world";
//     for(int i=0; i>12; i++){
//         printf("%c",ch[i]);
//     }
// }



// #include<stdio.h>
// int main(){
//     char str[2];
    
//     printf("Please enter string: ");
//     scanf("%[^.]",str);
//     printf("%s",str);
// }


// #include<stdio.h>
// int main(){
//     char str[12];
//     printf("Please enter string: ");
//     scanf("%[^\n]s",str);
//     printf("%s",str);
// }




// #include <stdio.h>
//  int main()
// {
//     char c = ' '; 
//     printf("The ASCII value of %c is %d", c, c);
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     char c = 'R';
//     printf("The ASCII value of %c is %d", c, c);
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[50];
//     printf("Enter your name: ");
//     gets(name);
//     printf("Your name is: ");
//     puts(name);
// }



// #include<stdio.h>
// int main(){
//     char a='?';
//     printf("The ASCII value of %c is %d",a,a);
//     return 0;
// }


 // #include<stdio.h>
// int main(){
//     char str[12];
//     printf("Please enter string: ");
//     scanf("%[^\n]s",str);
//     printf("%s",str);
// }


// #include<stdio.h>
// int main(){
//     char str[12];
//     printf("Please enter string: ");
//     scanf("%[^\n]s",str);
//     printf("%s",str);
// }


// pending code
// #include<stdio.h>
// int main(){
//     char str[20];
//    printf("%s", str);
//    scanf("%s", str);
//    return 0;
// }



// #include<stdio.h>
// int main(){
//     char name[7];
//     printf("Enter the name: ");
//     scanf("%s", name);
//     printf("Your name is %s.", name);
//     return 0;
// }


#include<stdio.h>
int main(){
    char str[10];
    printf("Please enter string: ");
    scanf("%[^\n]s",str);
    puts(str);
}