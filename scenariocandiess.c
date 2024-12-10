/*Write a c program to implement above scenario. Display JAR at counter with available number of candies. Input should be the number of candies one customer can order at point of time. Update the JAR after each purchase and display JAR at Counter.*/
#include <stdio.h>
#define INITIAL_CANDIES 100
int main()
 {
    int candies_in_jar = INITIAL_CANDIES;
    printf("Welcome to the Candy Counter!\n");
    printf("Initial candies in jar: %d\n", candies_in_jar);
    while (1)
     {
        int customer_order;
        printf("Enter the number of candies to order (0 to exit): ");
        scanf("%d", &customer_order);
        if (customer_order == 0) 
        {
            break;
        }
        if (customer_order > candies_in_jar)
         {
            printf("Sorry, not enough candies in the jar. Available candies: %d\n", candies_in_jar);
        }
         else
        {
            candies_in_jar -= customer_order;
            printf("Candies ordered: %d\n", customer_order);
            printf("Remaining candies in jar: %d\n", candies_in_jar);
        }
    }
    return 0;
}