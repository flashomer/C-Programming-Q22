#include <stdio.h>

void findGrade(float a,float b[10][10],int c){
	printf("The students who are above %.2f are: \n",a);
	for(int i=0; i<=c; i++){
		
		if(b[i][1] > a){
			printf("%.0f \n",b[i][0]);
		}
	}	
}

int main(){
	FILE *inp = fopen("grades2.txt", "r");

	float sid[10][10];
	int i=0,j=0;
	float k;

	while(1){
		if(feof(inp)){	break;}
		
		if(i%2 == 0) {
			fscanf(inp,"%f ",&sid[j][0]);	
		} else {
			fscanf(inp,"%f ",&sid[j][1]);
			j++;	
		}
		
		i++;
		
		}
		
		//printf("%f \n",sid[0][1]);

	i = i/2;
	printf("Enter a grade :");
	scanf(" %f",&k);
	findGrade(k,sid,i);
	
	
	return 0;
}


