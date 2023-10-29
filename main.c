#include <stdio.h>

int main() {
    int fishBiryaniQuantity = 0,
        fishBiryaniPrice = 400,
        chickenBiryaniQuantity = 0,
        chickenBiryaniPrice = 350,
        sindhiBiryaniQuantity = 0,
        sindhiBiryaniPrice = 300,
        lahoriBiryaniQuantity = 0,
        lahoriBiryaniPrice = 350,
        tikkaBiryaniQuantity = 0,
        tikkaBiryaniPrice = 450,
        total = 0,
        exit = 0,
        selectedItem = 0,
        selectedItemQuantity = 0;

    do {
        printf("Choose an item that you want to order.\n 1 - Fish Biryani => Rs.%d\n 2 - Chicken Biryani => Rs.%d\n 3 - Sindhi Biryani => Rs.%d\n 4 - Lahori Biryani => Rs.%d\n 5 - Tikka Biryani => Rs.%d\n 6 - Place Order \n 0 - Exit \n\n", fishBiryaniPrice, chickenBiryaniPrice, sindhiBiryaniPrice, lahoriBiryaniPrice, tikkaBiryaniPrice);

        scanf("%d", &selectedItem);

        if (selectedItem >= 1 && selectedItem <= 5) {
            printf("Select quantity of the selected item: \n");
            scanf("%d", &selectedItemQuantity);

            if (selectedItemQuantity < 0) {
                printf("Invalid quantity. Please enter a non-negative quantity.\n");
            } else {
                switch (selectedItem) {
                case 1:
                    total += selectedItemQuantity * fishBiryaniPrice;
                    fishBiryaniQuantity += selectedItemQuantity;
                    break;
                case 2:
                    total += selectedItemQuantity * chickenBiryaniPrice;
                    chickenBiryaniQuantity += selectedItemQuantity;
                    break;
                case 3:
                    total += selectedItemQuantity * sindhiBiryaniPrice;
                    sindhiBiryaniQuantity += selectedItemQuantity;
                    break;
                case 4:
                    total += selectedItemQuantity * lahoriBiryaniPrice;
                    lahoriBiryaniQuantity += selectedItemQuantity;
                    break;
                case 5:
                    total += selectedItemQuantity * tikkaBiryaniPrice;
                    tikkaBiryaniQuantity += selectedItemQuantity;
                    break;
                default:
                    break;
                }
            }

        } else if (selectedItem == 6) {
            exit = 1;
            printf("Placing Order. Exiting the program. Goodbye!\n");
            break;
        } else {
            printf("Invalid selection. Please choose a number between 1 and 6.\n");
        }

    } while (exit == 0);

    // Display order summary and total bill for selected items
    printf("Order Summary:\n");
    if (fishBiryaniQuantity > 0){
        printf("Fish Biryani Quantity: %d\n", fishBiryaniQuantity);
    }
    if (chickenBiryaniQuantity > 0){
        printf("Chicken Biryani Quantity: %d\n", chickenBiryaniQuantity);
    }
    if (sindhiBiryaniQuantity > 0){
        printf("Sindhi Biryani Quantity: %d\n", sindhiBiryaniQuantity);
    }
    if (lahoriBiryaniQuantity > 0){
        printf("Lahori Biryani Quantity: %d\n", lahoriBiryaniQuantity);
    }
    if (tikkaBiryaniQuantity > 0){
        printf("Tikka Biryani Quantity: %d\n", tikkaBiryaniQuantity);
    }

    printf("Total Bill: Rs.%d\n", total);

    return 0;
}
