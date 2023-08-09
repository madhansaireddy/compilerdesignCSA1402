//1. Program to categorise operators, constants and identifiers
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main(){
	int m, i, ic=0, oc=0, cc=0, constants[30];
	char input[30], operators[30], identifiers[30];
	printf("Enter the Expression: ");
	scanf("%[^\n]s",input);
	for(i=0;i<strlen(input);i++){
		if(isspace(input[i])){
			continue;
		}
		else if(isalpha(input[i])){
			identifiers[ic]=input[i];
			ic++;
		}
		else if(isdigit(input[i])){
			m = (input[i]-'0');
			i=i+1;
			while(isdigit(input[i])){
				m=m*10+(input[i]-'0');
				i++;
			}
			i--;
			constants[cc]=m;
			cc++;
		}
		else{
			if(input[i]=='*'){
				operators[oc]='*';
				oc++;
			}
			if(input[i]=='-'){
				operators[oc]='-';
				oc++;
			}
			if(input[i]=='+'){
				operators[oc]='+';
				oc++;
			}
			if(input[i]=='/'){
				operators[oc]='/';
				oc++;
			}
			if(input[i]=='%'){
				operators[oc]='%';
				oc++;
			}
		}
	}
	printf("\nConstants: ");
	for(i=0;i<cc;i++){
		printf("%d ",constants[i]);
	}
	printf("\nIdentifiers: ");
	for(i=0;i<ic;i++){
		printf("%c ",identifiers[i]);
	}
	printf("\nOperators: ");
	for(i=0;i<oc;i++){
		printf("%c ",operators[i]);
	}
	return 0;
}
