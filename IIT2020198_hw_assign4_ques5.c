/*Finding total charges of electricity used*/
#include <stdio.h>
int main(void)

{
	float units,cost;
	printf("Enter units consumed\n");
	scanf("%f",&units);

	
	 
	 	 if (units<=25) { 
	 	    cost=units*4.89;
	 	    printf("Total cost is %.2f\n",cost);
	 	 }   

	 	 else if (units<=60) {
	 	    cost=(25*4.89)+(units-25)*5.40;
	 	    printf("Total cost is %.2f\n",cost);
	 	 }   

	 	      else if (units<=100) {
	 	         cost=(25*4.89)+(35*5.40)+(units-60)*6.41;
	 	         printf("Total cost is %.2f\n",cost);
	 	      }  

	 	         else if (units>100) {
	 	            cost=(25*4.89)+(35*5.40)+(40*6.41)+(units-100)*7.18;
	 	            printf("Total cost is %.2f\n",cost);
	 	         }

	 	 else printf("Invalid input\n");           
	 

   return 0;
   	 
}