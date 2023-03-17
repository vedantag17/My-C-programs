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
 
 strcat(str1,str2);
 
 puts(str2);
 puts(str1);
 return 0;
}

