#include<stdio.h>
int main()
{

char str[10];
char *cptr;
cptr = str;
printf(" %c",*cptr);
cptr = cptr+1;
printf(" %c",*cptr);

//string funcrions:

int mystrlen(char *s)
{
	int i ,cnt = 0;
	while (s[i]!='\0')   //s[i] ----> *(s+i)
	{
		i++;
		cnt++;
	}
	return 0;
}

int mystrlen(char *s)
{
	int i, cnt = 0;
	for(i=0;s[i]!='\0';i++)
	{
		cnt++;
	}
	return cnt;
}

int mystrlen(char *s)
{
	int l;
	for(l=0;s[l]!='\0';l++);
	{
		retuen l;
	}
}


int mystrlen(char *s)
{
	int l;
	for(l=0;*s!='\0';l++,s++);
	{
		retuen l;
	}
}


char *strcpy(char *tar,char *sou)  //tar=target , sou=source
{
	int i;
	for(i=0;sou[i]!='\0';i++)
	{
		tar[i]=sou[i];
	}
	tar[i]='\0';
	return tar;
}

//strlen(strcpy(tar,sou))

char *strcpy(char *tar,char *sou)  
{
	int i;
	char *tmp=tar;
	
	for(i=0;*sou!='\0';i++)
	{
		*tar=*sou;
		tar++;
		sou++;
	}
	*tar='\0';
	return tar;
}

char *mystrcpy(char *tar,char *sou) 
{
	int i;
	*tmp=tar;
	for(i=0;*sou!='\0';i++)
	{
		*tar=*sou;
		tar++;
		sou++;
	}
	*tar='\0';
	return tar;
}

char *mystrcpy(char *tar,char *sou) 
{
	int i;
	*tmp=tar;
	while(*sou!='\0')
	{
		*tar=*sou;
		tar++;
		sou++;
	}
	*tar='\0';
	return tar;

char *mystrcat(char *tar,char *sou)
{
	int i,j;
	for(i=0;tar[i]!='\0';i++)
	{
		for(j=0;sou[j]!='\0'j++,i++)
		{
		    tar[i]=sou[j];
	    }
	}
	tar[i]='\0';
	return tar;
}

/*
tar = "hello"
sou = "world"

then

tar = helloworld
*/

char *mystrcat(char *tar,char *sou)
{
	char *tmp =tar;
	for(;*tar!='\0';i++,tar);
	
	for(;*sou!='\0'sou++,tar++)
		*tar=*sou;
	*tar='\0';
	return tar;
}

//****************************************
/*
char *mystrcmp(char *s1,char *s2)
{
	
	?????
}


HW
if s1>s2 return +1
if s1<s2 return -1
if s1==s2 return 0

*/




}