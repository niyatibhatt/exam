#include <stdio.h>
main(){
	int salary;
	float HRA;float DA;float TA;
	
	printf("Enter basa salary :");
	scanf("%d" ,&salary);
	
	printf("Enter basa salary :");
	scanf("%d" ,&HRA);
	
	printf("Enter basa salary :");
	scanf("%d" ,&DA);
	
	printf("Enter basa salary :");
	scanf("%d" ,&TA);
	
	float cal= salary+((salary*HRA)/100)+((salary*DA)/100)+((salary*TA)/100);
	
	printf("gross salary : rs.%f",cal);
	
}