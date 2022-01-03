#include<stdio.h>
#include<stdlib.h>

int len(char str[]) ;
int isSubstring(char *string1,int strLen, char *string2,int subLen);
 
void main()
{
	char string[100], substring[100];   
	int strLen,subLen,number;

        printf("Enter the number of Times to check: ");
        scanf("%d",&number);
        while( number > 0){  
		printf("\nEnter a string: ");
		 scanf("%s", string);
		printf("\nEnter the sub string: ");
		 scanf("%s", substring);

		strLen = len(string);
		subLen = len(substring);

		int k = isSubstring(string,strLen,substring,subLen);
		if(k == -1)
			 printf("NO \n");
		else
		 	 printf("YES \n");
		 number--;
	}
}

int len(char str[]) {
        int i;
        for (i = 0; str[i] != '\0'; ++i);
        return i;
    	}

int isSubstring(char *string1,int strLen, char *string2,int subLen) {
 
    for (int i = 0; i <= strLen - subLen; i++) 
     {
        int j;
        for (j = 0; j < subLen; j++)
            if (string2[i + j] != string1[j])
                break;
 
            if (j == subLen)
                return i;
     }
         
    return -1;
}
 
