#include<stdio.h>
#include<string.h>
int main()
{
char word[50],r[50] ;
printf("Enter any word.\n");
gets(word) ;
strcpy(r,word) ;
strrev(r) ;
if(strcmp(strlwr(r),strlwr(word)) == 0)
printf("Palindrome\n");
else
printf("not Palindrome\n");
return 0 ;
}
