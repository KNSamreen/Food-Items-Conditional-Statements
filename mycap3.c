#include<stdio.h>
main()
{
	int select=0;
	printf("Select your food item \n 1.Sandwich - 70/- \n 2.Noodles - 120/- \n 3.Veg Roll - 90/- \n 4.Pasta - 100/- \n 5.French Fries - 80/- \n ");
	scanf("%d",&select);
	switch(select)
	{
	case 1:
		printf("Food item - Sandwich \n Price - Rs 70/-",select);
		break;
	case 2:
		printf("Food item - Noodles \n Price - Rs 120/-");
		break;
	case 3:
		printf("Food item - Veg Roll \n Price - Rs 90/-");
		break;
	case 4:
		printf("Food item - Pasta \n Price - Rs 100/-");
		break;
	case 5:
		printf("Food item - French Fries \n Price - Rs 80/-");
		break;
	default:("Invalid Choice");
    }
	return 0; 
}
