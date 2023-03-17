#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
 int ch1,value;
 do {
	 char str1[20],str2[20];
	 printf("Enter the string1: ");
	 scanf("%s", str1);
	 printf("Enter the string2: ");
	 scanf("%s", str2);
	 int len,ch;
	 printf(" 1.String length \n 2.String copy \n 3.Sting concatenation \n 4.String compare \n Enter your input:");
	  	 
	 scanf("%d", &ch);
	 switch(ch)
 	 {	
	 	case 1:
		 	len = strlen(str1);
		 	printf("The length of the string is: %d \n",len); 	 
		 	break;
		 
		case 2:
		 	strcpy(str2,str1);
	 		puts(str1);
	 		puts(str2);
	 		break;
	 		
		case 3:
			strcat(str1,str2);
	 
	 		puts(str2);
	 		puts(str1);
	 		break;
	 	case 4:
	 		value = strcmp(str1,str2);
	 		if (value == 0)
	 		{
	 			printf("Both strings are equal \n");
	 		}
	 		else
	 		{
	 			printf("The strings are not equal \n");
	 		}
	 		
	 		break;
	 		
	 	default:
	 		printf("Invalid choice");
	 	
 	 }
 	 printf("------------------------------------------------\n");
	 printf("Do you want to continue? \n 1.Yes 2.No \n Enter your input:");
	 scanf("%d",&ch1);
   }
   while (ch1 == 1);
	 
   return 0;
}
/*pl2@pl2-HP-280-Pro-G6-Microtower-PC:~/B1_01/4-2$ gcc strswitch.c 
pl2@pl2-HP-280-Pro-G6-Microtower-PC:~/B1_01/4-2$ ./a.out
Enter the string1: Vedant 
Enter the string2: Agrawal
 1.String length 
 2.String copy 
 3.Sting concatenation 
 4.String compare 
 Enter your input:4
The strings are not equal 
------------------------------------------------
Do you want to continue? 
 1.Yes 2.No 
 Enter your input:1
Enter the string1: Anuj
Enter the string2: Deshmukh
 1.String length 
 2.String copy 
 3.Sting concatenation 
 4.String compare 
 Enter your input:1
The length of the string is: 4 
------------------------------------------------
Do you want to continue? 
 1.Yes 2.No 
 Enter your input:2
*/

