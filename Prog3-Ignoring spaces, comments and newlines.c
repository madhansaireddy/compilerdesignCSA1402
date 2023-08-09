//3. Program to ignore the redundant spaces, tabs, new lines and comments.
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int i,j=0,flag=1,len;
	char input[50],output[50];
	printf("Enter Text Line: ");
	scanf("%[^~]s",input);
	len = strlen(input);
	for(i=0;input[i]!='\0';i++){
		if(input[i]=='/' && input[i+1]=='/'){
			flag = 0;
		}
		if(input[i]=='\n'){
			flag = 1;
		}
		if(input[i]=='/' && input[i+1]=='*'){
			flag = 0;
		}
		if(input[i]=='*' && input[i+1]=='/'){
			flag = 1;
			i=i+2;
		}
		if(isspace(input[i])){
			continue;
		}
		if(input[i]=='\n'){
			continue;
		}
		else{
			if(flag==1){
				output[j]=input[i];
			    j++;
			}
		}
	}
	for(i=0;i<j;i++){
		printf("%c",output[i]);
	}
}
