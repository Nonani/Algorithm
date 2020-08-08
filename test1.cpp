#include <stdio.h>
#include <string.h>

void reverse_print(char *ptr_str[]);

int main(void)
{
    
    char *ptr_str[3]={"abcde", "cdfeg", "this is string"};
    reverse_print(ptr_str);
    return 0;
}

void reverse_print(char *ptr_str[])
{
	int i, j;
    for(i=0;i<3;i++){
    	int start = 0;
    	int end = strlen(ptr_str[i])-1;
    	for(j=strlen(ptr_str[i])-1;j>=0;j--){
    		printf("%c", ptr_str[i][j]);
		}printf("\n");
	}
    
}

