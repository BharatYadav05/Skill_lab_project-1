#include <stdio.h>
int main()
{

    float total, final, a, b, c, gst;

    printf("Enter the Prices of  3 products:\n\n");

    printf("Enter price of 1st product:");
    scanf("%f", &a);
    printf("Enter price of 2nd product:");
    scanf("%f", &b);

    printf("Enter price of 3rd product:");
    scanf("%f", &c);
    
    printf("\n");

    total = a + b + c;
    gst = (total * 18) / 100;
    final = total + gst;

    printf("Total Amount  : %.2f \n", total);
    printf("GST (18%)     : %.2f \n", gst);
    printf("Final Amount  : %.2f \n", final);
    printf("Size of Total : %zu bytes", sizeof(total));

    // printf("The final amount of purchased 3 products including gst is %.2f \n", final);

    // printf("Size of variable used in this program is :%u\n", sizeof(final));

    return 0;
}
