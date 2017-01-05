#include <stdio.h>


int main(void) 
{
    
	float price = 0;

    	float discount = 0;
 
   	float newPrice = 0;
   
 	float intPrice = 0;
  
  	float newDiscount = 0;

    	float percentDiff = 0;
    
	int answer = 0;
	
	int answer2 = 1;
	printf("Do you want the whole list or to search a specific amount? (1 for list): ");

    	scanf("%d", &answer);
    
	if (answer == 1)
    
	{
        
		printf("Enter in the initial price (NAM): ");
	    
		scanf("%f", &price);
	    
		printf("Price($)   Discount(%)   International Price($)   International Discount(%)   New Price($)  Percent Difference(%)\n");	    	
		printf("-----------------------------------------------------------------------------------------------------------------\n");
	  
		for(discount = 0; discount <= 100.00; discount+=.01)
	    
		{
	        
			newPrice = price*(1-(discount/100.0));
	        
			intPrice = price*1.2;
	        
			newDiscount = (1-(newPrice/intPrice))*100.0;
	        
			percentDiff = (discount/newDiscount)*100;
	        
			printf("%.2f       %.2f             %.2f                      %.2f                  %.2f             %.2f         \n", price, discount, intPrice, newDiscount, newPrice, percentDiff);
		}
    
	}
    
	else
    
	{
        
		while (answer2 == 1)
        
		{
            
			printf("Enter in the initial price (NAM): ");
	        
			scanf("%f", &price);
            
			printf("Enter in the discount (ex: 10): ");
            
			scanf("%f", &discount);
            
			newPrice = price*(1-(discount/100.0));
	        
			intPrice = price*1.2;
	        
			newDiscount = (1-(newPrice/intPrice))*100.0;
	        
			percentDiff = (discount/newDiscount)*100;
            
			printf("NAM Price: %.2f\n", price);
            
			printf("Discount: %.2f%\n", discount);
            
			printf("International Price: %.2f\n", intPrice);
            
			printf("International Discount: %.2f%\n", newDiscount);
            
			printf("New Net Price: %.2f\n", newPrice);
            
			printf("Percent Difference: %.2f%\n", percentDiff);
            
			printf("Do you want to continue? (1 for yes): ");
            
			scanf("%d", &answer2);
        
		}
    
	}
	
	return 0;

}

