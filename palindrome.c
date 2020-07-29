/*Write a program to find out if a string is a palindrome. The string may contain spaces as well as special characters. The program should ignore the special characters and determine whether the string is a palindrome or not.
(For example the string can be “m ad..am”. In this case the string should be read as “madam” which is a palindrome.)*/

#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char str[100];          
	printf("enter string:");
	fgets(str,sizeof(str),stdin);
// remove all the characters from the string except alphabets.

	for(i=0,j;str[i]!='\0';++i)
	{
		while(!(str[i]>='a'&&str[i]<='z')&&!(str[i]>='A'&&str[i]<='Z')&&!(str[i]=='\0')) //enter if the character is not an alphabet.
		{
			for(j=i;str[j]!='\0';++j)
			{
				str[j]=str[j+1]; //if the jth element is not an alphabet replace it with (j+1)th element.
			}
			str[j]='\0';
		}
	}
// find the string is palindrome or not
	int l=0; //first character
	int h=strlen(str)-1; //last character
	while(h>l)  //keep comparing characters while they are same
	{
		if(str[l++]!=str[h--])
		{
			printf("the given string is not a palindrome");
			return;
		}
	}
	printf("the given string is a palindrome");
}
