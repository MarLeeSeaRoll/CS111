#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const int MOVIE_COUNT = 4;

string movies[MOVIE_COUNT] = {
    "Diamonds are Forever",
    "Never Say Never Again",
    "On Her Majesty's Secret Service",
    "GoldFinger"};

int regularPrices[MOVIE_COUNT] = {9, 8, 8, 10};
int groupPrices[MOVIE_COUNT] = {6, 7, 6, 7};
int premiumPrices[MOVIE_COUNT] = {14, 18, 15, 14};
int premiumGroupPrices[MOVIE_COUNT] = {11, 10, 11, 10};

void displayWelcomeScreen()
{
    cout << "Welcome to Movies Ltd Ticketing System" << endl;
    cout << "Please follow the instructions to purchase your tickets." << endl;
    cout << "Available movies:" << endl;
    for (int i = 0; i < MOVIE_COUNT; ++i)
    {
        cout << i + 1 << ". " << movies[i] << endl;
    }
    cout << endl;
}

int getTicketPrice(int movieIndex, char cinemaType, int numTickets)
{
    if (cinemaType == 'R' || cinemaType == 'r')
    {
        if (numTickets > 8)
        {
            return groupPrices[movieIndex];
        }
        else
        {
            return regularPrices[movieIndex];
        }
    }
    else if (cinemaType == 'P' || cinemaType == 'p')
    {
        if (numTickets > 8)
        {
            return premiumGroupPrices[movieIndex];
        }
        else
        {
            return premiumPrices[movieIndex];
        }
    }
    return 0;
}

int main()
{
    char continueProgram = 'Y';

    while (continueProgram != 'Q' && continueProgram != 'q')
    {
        displayWelcomeScreen();

        int movieIndex;
        char cinemaType;
        int numTickets;

        cout << "Enter Movie (1-4): ";
        cin >> movieIndex;
        if (movieIndex < 1 || movieIndex > 4)
        {
            cout << "Invalid movie selection. Please try again." << endl;
            continue;
        }
        movieIndex--; // Adjusting to 0-based index

        cout << "Enter Preferred cinema (Regular(R) or Premium(P)): ";
        cin >> cinemaType;
        if (cinemaType != 'R' && cinemaType != 'r' && cinemaType != 'P' && cinemaType != 'p')
        {
            cout << "Invalid cinema type. Please try again." << endl;
            continue;
        }

        cout << "Enter number of tickets: ";
        cin >> numTickets;
        if (numTickets < 1)
        {
            cout << "Number of tickets should be at least 1. Please try again." << endl;
            continue;
        }

        int pricePerTicket = getTicketPrice(movieIndex, cinemaType, numTickets);
        int totalCost = pricePerTicket * numTickets;

        cout << "Cost of tickets for " << numTickets << " people to " << movies[movieIndex] << " is $" << totalCost << endl;

        cout << "Do you want to continue? (Q to quit, any other key to continue): ";
        cin >> continueProgram;
    }

    cout << "Thank you for using Movies Ltd Ticketing System. Goodbye!" << endl;

    return 0;
}
