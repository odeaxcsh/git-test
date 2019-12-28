//VOX muno
#include<stdio.h>
#include<string.h>
#include<ctype.h>
 
#define MAX (int)1e6 + 1
 
int isNumber (const char*);
 
int main() {
	int len = 0;
	char inp [MAX], bfr, key = 1;	
	char* nums [MAX] = { 0 },
	 	*tokens[MAX] = { 0 };
	
	inp [len++] = ';';
	
	while(1 > 0) {
		bfr = getchar ();
		
		if (bfr == '\n') break;
		
		if (key && (bfr == ',' || bfr == ';'))
			inp[len++] = '$';
			nums[i++] = tok;
		
		else tokens[j++] = tok;
			
		
		tok = strtok (NULL, ",;");
	}
	
	if (i) {
		printf ("\"");
		int isFirst = 1;
		for (int i = 0; nums[i]; i++)
			if (isFirst){
				isFirst = 0;
				printf ("%s", nums[i]);
			}
			else
				printf (",%s", nums[i]);
			
		printf ("\"\n");
	}
	
	else printf ("-\n");
	
		if (j) {
		printf ("\"");
		int isFirst = 1;
		for (int i = 0; tokens[i]; i++)
			if (isFirst){
				isFirst = 0;
				if (tokens[i][0] != '$')
					printf ("%s", tokens[i]);
			}
			else{
				printf (",");
				
				if (tokens[i][0] != '$')
					printf ("%s", tokens[i]);
			}
			
		printf ("\"\n");
	}
	
	else printf ("-\n");
}
 
int isNumber (const char* str) {
	if (str == 0) return 0;
	if (*str == '0' && *(str+1) == '\0') return 1;
	if (*str == '0') return 0;
	
	while (isdigit (*str++));
	
	return !*(str-1);
}
//Dec/18/2019 23:36 UTC +3.5		Odeax iaath
