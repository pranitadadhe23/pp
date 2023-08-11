#include <stdio.h>

struct Product {
    char productName[100];
    float productValue;
};

int main() {
    struct Product products[5];

    // Initialize the products array with user input
    for (int i = 1; i <= 5; i++) {
        printf("Enter the product name: ");
        scanf("%s", &products[i].productName);

        printf("Enter the product value: ");
        scanf("%f", &products[i].productValue);

        printf("\n");
    }

    // Print the products array
    printf("P Name\t  P Value\n");
    for (int i = 1; i <= 5; i++) 
	{
        printf("%s\t  %.2f\n",
            products[i].productName,
            products[i].productValue);
    }
    float sum,discount,famount;
    for (int i=1;i<=5;i++)
    {
    	sum+=products[i].productValue;
	}
    printf("sum is %f\n",sum);
    if(sum>5000)
    {
    	discount= (sum*10)/100;
    	famount=sum-discount;
    	printf("total bill is %f",famount);
	}
	else if(sum>4000)
	{
		discount= (sum*7)/100;
    	famount=sum-discount;
    	printf("total bill is %f",famount);
	}
	else
	{
		famount=sum;
		printf("total bill is %f",famount);
	}
    return 0;
}
