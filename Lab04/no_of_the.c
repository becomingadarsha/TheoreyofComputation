#include<stdio.h>
#include<string.h>

int main(void) {
	char para[20];
	char word[3] = {'t', 'h', 'e',' '};
	int i=0,p=0,q=0;
	int j =0;
	int count = 0;
	
	printf("Enter the paragraph : ");
	 scanf("%[^\n]s", para);
	
	
	
	while(para[i]!=NULL) {
	
	if(q==0 && para[i] == word[0]){
		q =1;
		j =i;	
	}
	
	if(q==1 && para[i]== word[1] && i == j+1) {
		q =2;
		j =i;
	}
	
	if(q ==1 && para[i]!= word[1] && i==j+1) {
		q=0;
	}
	
	if(q==1 && para[i] != word[1] && i==j+1) {
		q=0;
	}
	
	if(q==2 && para[i] == word[2] && i == j+1) {
		q=3;
		j=i;
		
	}
	
	if(q==2 && para[i] != word[2] && i == j+1) {
		q=0;
	}
	
	if(q==3 && para[i] ==word[4] && i==j+1)
	{
		q==4;
		count++;
	}
	
	if(q==4) {
		q =0;
	}
	
		i++;
	}

	if(count > 0) {
		printf("%d", count);
	}

return 0;
}


