#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 char str1[20],str2[20];
 printf("Enter the string1: ");
 scanf("%s", str1);
 printf("Enter the string2: ");
 scanf("%s", str2);
 
 strcpy(str2,str1);
 
 puts(str1);
 puts(str2);
 return 0;
}
