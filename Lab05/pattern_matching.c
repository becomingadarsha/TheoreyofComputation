#include<stdio.h>
#include<string.h>

int main(void) {
	
	
	char str1[30], str2[30];
	int i,j,k,m,n;
	
	printf("Enter the main string : ");
	scanf("%s",&str1);
	
	printf("Enter the sub string : ");
	scanf("%s", &str2);
	
	m = strlen(str1);
	n = strlen(str2);
	
	if(m<n) {
		printf("Pattern length is greater than the input ");
	}
	
	else {
		
	for(i=0;i<m-n+1;i++)
 	{
    	for(j=0;j<n;j++)
    	{
    		if(str1[i+j] != str2[j])
       			break;
    	}
    	
   		 if(j == n)
   		 {
      		printf("\n\n Pattern found at %d. ",i);
    	 }
  }
  
}

return 0;
	
}


