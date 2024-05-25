#include <iostream>
#include <string>
using namespace std;

// Constant for the number of movies.
const int movieNumbers = 4;

// Arrays to store movie names and their respective prices
string movie_name[movieNumbers] = {"Diamonds are forever", "Never Say Never Again", "On Her Majesty's Secret Service", "GoldFinger"};
int regularPrice[movieNumbers] = {9, 8, 8, 10};
int regulargroupPrice[movieNumbers] = {6, 7, 6, 7};
int premiumPrice[movieNumbers] = {14, 18, 15, 14};
int premiumgroupPrice[movieNumbers] = {11, 10, 11, 10};

// Function to display the welcome screen and available movies with their prices
void displayWelcomescreen()
{
    cout << "Welcome to Movies Ltd Tickets System." << endl;
    cout << "Available Movies and their prices:" << endl;
    for (int i = 0; i < movieNumbers; i++)
    {
        cout << i + 1 << "." << movie_name[i] << endl;
        cout << "   Regular: $" << regularPrice[i] << ", Group (more than 8): $" << regulargroupPrice[i] << endl;
        cout << "   Premium: $" << premiumPrice[i] << ", Premium Group (more than 8): $" << premiumgroupPrice[i] << endl;
    }
    cout << endl;
}

//// Function to calculate the price per ticket based on movie index, cinema type, and number of tickets
int getTicketsPrice(int movieIndex, char preferCinema, int numoftickets)
{
    const int forsubtract = 1;//

    if (preferCinema == 'R' || preferCinema == 'r')
    {
        if (numoftickets > 8)
        {
            return regulargroupPrice[movieIndex-forsubtract];
        }
        else
        {
            return regularPrice[movieIndex-forsubtract];
        }
    }
    else if (preferCinema == 'P' || preferCinema == 'p')
    {
        if (numoftickets > 8)
        {
            return premiumgroupPrice[movieIndex-forsubtract];
        }
        else
        {
            return premiumPrice[movieIndex-forsubtract];
        }
    }
    return 0; // Return 0 if the input is invalid;
}

// Main loop to repeatedly ask for user input until they choose to quit
int main()
{
    char continue_running = 'Y';
    while (continue_running != 'Q' && continue_running != 'q')
    {
        displayWelcomescreen();

        int movieIndex;
        int numoftickets;
        char preferCinema;
        const int l_limitofMI = 1; // Lower limit for movie index and tickets number
        const int H_limitofMI = 4; // Lower limit for movie index

        // Prompt for movie selection
        cout << "Enter movie number(1-4)" << endl;
        cin >> movieIndex;
        while (cin.fail() || (movieIndex < l_limitofMI || movieIndex > H_limitofMI))
        {
            cin.clear();
            string dummy;
            getline(cin, dummy);
            cout << "Invalid movie selection, please try again:" << endl;
            cin >> movieIndex;
        }
        movieIndex--; // Adjust to 0-based index

        // Prompt for cinema type selection
        cout << "Choose prefer cinema:" << endl;
        cin >> preferCinema;
        while (preferCinema != 'R' && preferCinema != 'r' && preferCinema != 'P' && preferCinema != 'p')
        {
            cin.clear();
            string dummy;
            getline(cin, dummy);
            cout << "Invalid Choice, please try again:" << endl;
            cin >> preferCinema;
        }

        // Prompt for number of tickets
        cout << "Please enter number of tickets" << endl;
        cin >> numoftickets;
        while (cin.fail() || (numoftickets < l_limitofMI))
        {
            cin.clear();
            string dummy;
            getline(cin, dummy);
            cout << "Number of tickets should be at least 1, please try again:" << endl;
            cin >> numoftickets;
        }

        // Calculate total price
        int pricePerticket = getTicketsPrice(movieIndex, preferCinema, numoftickets);
        int totalPrice = pricePerticket * numoftickets;

        // Display the total price
        cout << "Cost of tickets for " << numoftickets << " people to " << movie_name[movieIndex] << " is $" << totalPrice << endl;
        cout << "Do you want to continue? (Q to quit, any other key to continue):" << endl;
        cin >> continue_running;
    }

    cout << "Thank you for using Movie Ltd Tickets System. See you next time." << endl;
    return 0;
}