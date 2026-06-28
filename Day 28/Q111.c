// WAP TO CREATE TICKET BOOKING SYSTEM

#include <stdio.h>

int main()
{
    int totalTickets = 50;
    int choice, tickets;

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. View Available Tickets\n");
        printf("2. Book Tickets\n");
        printf("3. Check Remaining Tickets\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Available Tickets = %d\n", totalTickets);
                break;

            case 2:
                printf("Enter number of tickets to book: ");
                scanf("%d", &tickets);

                if(tickets <= totalTickets && tickets > 0)
                {
                    totalTickets = totalTickets - tickets;
                    printf("Booking Successful!\n");
                }
                else
                {
                    printf("Tickets not available!\n");
                }
                break;

            case 3:
                printf("Remaining Tickets = %d\n", totalTickets);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } 
    
    while(choice != 4);

    return 0;
}