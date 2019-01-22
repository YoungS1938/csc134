// CSC-134
// M2Lab1_Young
// Seth Young
// 01-22-2019
// A Program to store collected information about movies.

#include <iostream>

using namespace std;

int main()
{
    int year;
    double rating;
    char firstLetter;
    string movieName;
    year = 2006;
    rating = 5.1;
    firstLetter = 'e';
    movieName = "Eragon";
    cout << "What is the movie name?" << endl;
    cin >> movieName;
    cout << "What is the movie rating?" << endl;
    cin >> rating,
    cout << "What year was the movie released?" << endl;
    cin >> year;
    cout << "What is the first letter of the movie?" << endl;
    cin >> firstLetter;
    cout << "The movie you entered is named " << movieName << endl;
    cout << "It was released " << year << "." << "It has an IMDB rating of " << rating << endl;
    cout << "I would file this movie under " << firstLetter << "." << endl;
    return 0;
}
