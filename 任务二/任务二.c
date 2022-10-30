#include<stdio.h>
#include<string.h>
#define maxsize 100 
int main(void)
{
	char s[maxsize],s1[maxsize];
	scanf("%s",s);
	for(int i=0,length=strlen(s);i<length;++i)
	 {
	 	s1[i]=s[i];
	 }
	 for(int i=0,length=strlen(s);i<length;++i){
	 	for(int j=0;j<length;++j)
	 	{
	 		if(s[i]==s1[j]&&i!=j)
	 		{
	 			s1[i]!='*';
		     }
		 }
		 if(s1[i]!='*')
		 {
		 	int number=0;
		 	for(int k=0;k<length;++k)
		 	{
			 if(s1[i]==s[k])
			   {
			   	++number;
			    }
			 }
			 printf("%c出现次数：%d\n",s1[i],number);
		 }
	 }
}
