#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

struct Book {
    int id;
    string isbn;
    string title;
    int year;
    string author;
    double price;
};

void displayBookByISBN(Book books[], int size, string isbn){
    bool found = false;
    cout << "Display book by ISBN: " << endl;
    for(int i = 0; i < size; i++){
        if(isbn == books[i].isbn){
            cout << "----------------------------------------------------------------------------------------------------------------\n";
            printf("| %-5s | %-15s | %-26s | %-5s | %-37s | %-5s |\n",
                 "ID", "ISBN", "Title", "Year", "Author", "Price");
            cout << "----------------------------------------------------------------------------------------------------------------\n";
            printf("| %-5d | %-15s | %-26s | %-5d | %-37s | %-5.2f |\n",
                 books[i].id, books[i].isbn.c_str(), books[i].title.c_str(), books[i].year, books[i].author.c_str(), books[i].price);
            cout << "----------------------------------------------------------------------------------------------------------------\n";
            found = true;
            break;
        }
    }

    if(!found){
        cout << "Sorry, no book found with the provided ISBN." << endl;
    }
}

void displayAllBooks(Book books[], int size){
    cout << "\nDisplay all Books: " << endl;
    cout << "----------------------------------------------------------------------------------------------------------------\n";
    printf("| %-5s | %-15s | %-26s | %-5s | %-37s | %-5s |\n",
         "ID", "ISBN", "Title", "Year", "Author", "Price");
    cout << "----------------------------------------------------------------------------------------------------------------\n";
    for(int i = 0; i < size; i++){
        printf("| %-5d | %-15s | %-26s | %-5d | %-37s | %-5.2f |\n",
             books[i].id, books[i].isbn.c_str(), books[i].title.c_str(), books[i].year, books[i].author.c_str(), books[i].price);
        cout << "----------------------------------------------------------------------------------------------------------------\n";
    }
}

int main(){

    Book books[5] = {
        {1, "978-0131103627", "The C Programming Language", 1988, "Brian W. Kernighan, Dennis M. Ritchie", 39.99},
        {2, "978-0132350884", "Clean Code", 2008, "Robert C. Martin", 34.95},
        {3, "978-1492078005", "JavaScript Design Patterns", 2020, "Addy Osmani", 29.99},
        {4, "978-1617294945", "Java in Action", 2018, "Raoul-Gabriel Urma et al.", 44.99},
        {5, "978-1491900864", "Fluent Python", 2015, "Luciano Ramalho", 49.99}
    };

    displayBookByISBN(books, 5, "978-0131103627");

    displayAllBooks(books, 5);

    return 0;
}