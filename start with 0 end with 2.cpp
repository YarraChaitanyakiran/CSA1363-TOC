 #include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i;
	scanf("%s",str);
	i=strlen(str);
    printf("%d",i);
	printf("%c",str[i-1]);
	printf("%c",str[0]);
	if(str[0]=='a'&&str[i-1]=='a')
	printf("accepted");
	else
	printf("not accepted");
	return 0;
}