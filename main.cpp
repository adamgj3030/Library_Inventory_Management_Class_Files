#include "Book.h"
#include "Library.h"

#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Beginning Tests." << endl;

    // Test Case 1: Testing the Book class

    // Set initial values for Book Class
    string initTitle = "The Great Gatsby";
    string initAuthor = "F. Scott Fitzgerald";
    string initGenre = "Classic";
    int initISBN = 1234567890;
    bool initIsBorrowed = false;
    string initBorrowedBy = "";
    string initDueDate = "";

    // Create object testBook of class Book
    Book testBook(initTitle, initAuthor, initGenre, initISBN, initIsBorrowed, initBorrowedBy, initDueDate);

    // Check get Title
    if (testBook.GetTitle() != initTitle) {
        cout << "   FAILED get Title" << endl;
    }

    // Check get Author
    if (testBook.GetAuthor() != initAuthor) {
        cout << "   FAILED get Author" << endl;
    }

    // Check get Genre
    if (testBook.GetGenre() != initGenre) {
        cout << "   FAILED get Genre" << endl;
    }

    // Check get ISBN
    if (testBook.GetISBN() != initISBN) {
        cout << "   FAILED get ISBN" << endl;
    }

    // Check get IsBorrowed
    if (testBook.GetIsBorrowed() != initIsBorrowed) {
        cout << "   FAILED get IsBorrowed" << endl;
    }

    // Check get BorrowedBy
    if (testBook.GetBorrowedBy() != initBorrowedBy) {
        cout << "   FAILED get BorrowedBy" << endl;
    }

    // Check get DueDate
    if (testBook.GetDueDate() != initDueDate) {
        cout << "   FAILED get DueDate" << endl;
    }

    // Check set Title
    testBook.SetTitle("1984");
    if (testBook.GetTitle() != "1984") {
        cout << "   FAILED set Title" << endl;
    }

    // Check set Author
    testBook.SetAuthor("George Orwell");
    if (testBook.GetAuthor() != "George Orwell") {
        cout << "   FAILED set Author" << endl;
    }

    // Check set Genre
    testBook.SetGenre("Dystopian");
    if (testBook.GetGenre() != "Dystopian") {
        cout << "   FAILED set Genre" << endl;
    }

    // Check set ISBN
    testBook.SetISBN(3456789012);
    if (testBook.GetISBN() != 3456789012) {
        cout << "   FAILED set ISBN" << endl;
    }

    // Check set IsBorrowed
    testBook.SetIsBorrowed(true);
    if (testBook.GetIsBorrowed() != true) {
        cout << "   FAILED set IsBorrowed" << endl;
    }

    // Check set BorrowedBy
    testBook.SetBorrowedBy("John Doe");
    if (testBook.GetBorrowedBy() != "John Doe") {
        cout << "   FAILED set BorrowedBy" << endl;
    }

    // Check set DueDate
    testBook.SetDueDate("2024-09-01");
    if (testBook.GetDueDate() != "2024-09-01") {
        cout << "   FAILED set DueDate" << endl;
    }

    // Test Case 2: Testing the Library class

    Library myLibrary;

    // Add books to the library
    myLibrary.AddBook(testBook);
    Book anotherBook("To Kill a Mockingbird", "Harper Lee", "Fiction", 2345678901);

    myLibrary.AddBook(anotherBook);

    // Check DisplayBooks after adding
    cout << "\nChecking DisplayBooks after adding books:" << endl;
    myLibrary.DisplayBooks();

    // Check RemoveBook
    myLibrary.RemoveBook(3456789012);
    cout << "\nChecking DisplayBooks after removing a book:" << endl;
    myLibrary.DisplayBooks();

    // Check EditBook
    Book updatedBook("To Kill a Mockingbird", "Harper Lee", "Classic", 2345678901);
    myLibrary.EditBook(2345678901, updatedBook);
    cout << "\nChecking DisplayBooks after editing a book:" << endl;
    myLibrary.DisplayBooks();

    // Check SearchBooks by title
    cout << "\nSearching for books by title (To Kill a Mockingbird):" << endl;
    myLibrary.SearchBooks("To Kill a Mockingbird", "title");

    // Check BorrowBook
    myLibrary.BorrowBook(2345678901, "Jane Doe", "2024-09-15");
    cout << "\nChecking DisplayBorrowedBooks after borrowing a book:" << endl;
    myLibrary.DisplayBorrowedBooks();

    // Check DisplayBorrowedBooks
    cout << "\nChecking DisplayBorrowedBooks for all borrowed books:" << endl;
    myLibrary.DisplayBorrowedBooks();

    // Final state of the library
    cout << "\nFinal state of the library:" << endl;
    myLibrary.DisplayBooks();

    cout << "Tests complete." << endl;

    return 0;
}
