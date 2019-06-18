#include<stdio.h>
 
#include<string.h>
 
int main()
 
{
 
int str_len,word_len,i,j,k,flag,count=0;
 
char str[200],word[20];
 
printf("Enter string: \n");
 
gets(str);
 
printf("Enter the word to count: \n");
 
scanf("%s",&word);
 
str_len=strlen(str);
word_len=strlen(word);
 
for(i=0;i<str_len;i++)
 
{
 
if(str[i]==word[0]&&((str[i-1]==' '||i==0)&&(str[i+word_len]==' '||str[i+word_len]==' '||str[i+word_len]=='.'||str[i+word_len]==',')))
 
{
 
for(flag=0,k=i+1,j=1;j<word_len;j++,k++)
 
{
 
if(str[k]==word[j]) //checking letters in word with string word
 
{
 
flag++; //increment flag
 
}
 
}
 
if(flag==word_len-1)
{
 
count++;
 
}
 
}
 
}
 
printf("Number of occurrence of '%s' = %d",word,count);
 
}
