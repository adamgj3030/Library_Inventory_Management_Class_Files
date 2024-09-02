#include "Library.h"

#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

// Adds a new book to the collection
void Library::AddBook(Book newBook) {
    books.push_back(newBook);
}

// Removes a book from the collection by its ISBN
void Library::RemoveBook(int isbn) {
    vector<Book>::iterator it;

    // Finds the book by its ISBN
    it = find_if(books.begin(), books.end(), [isbn](const Book& book) {
        return book.GetISBN() == isbn;
    });
    
    if (it != books.end()) {
        books.erase(it);  // Erases the book if found
         cout << "Book with ISBN " << isbn << " has been removed." << endl;
    }

    else {
        cout << "Book not found." << endl;
    }
}

// Edits the details of an existing book by its ISBN
void Library::EditBook(int isbn, Book updatedBook) {
    vector<Book>::iterator it;
    // Finds the book by its ISBN
    it = find_if(books.begin(), books.end(), [isbn](const Book& book) {
        return book.GetISBN() == isbn;
    });

    if (it != books.end()) {
        *it = updatedBook;  // Updates the book details if found
         cout << "Book with ISBN " << isbn << " has been updated." << endl;
    }

    else {
        cout << "Book not found." << endl;
    }
}

// Displays all books in the collection
void Library::DisplayBooks() const {
    string yn = "";

    for (auto& book : books) {
        if (book.GetIsBorrowed() == true) {
                yn = "Yes";
        }

        else {
                yn = "No";
        }

        // Displays the details of each book
        cout << "Title: " << book.GetTitle() << ", Author: " << book.GetAuthor()
             << ", Genre: " << book.GetGenre() << ", ISBN: " << book.GetISBN()
             << ", Borrowed: " << yn << endl;
    }
}

// Searches for books by a specific field (title, author, genre, or ISBN)
void Library::SearchBooks(string query, string field) const {
    string yn = "";

    for (auto& book : books) {
        // Checks if the book matches the search query in the specified field
        if ((field == "title" && book.GetTitle() == query) ||
            (field == "author" && book.GetAuthor() == query) ||
            (field == "genre" && book.GetGenre() == query) ||
            (field == "isbn" && to_string(book.GetISBN()) == query)) {
            if (book.GetIsBorrowed() == true) {
                yn = "Yes";
            }

            else {
                yn = "No";
            }

            // Displays the details of the matching book
            cout << "Title: " << book.GetTitle() << ", Author: " << book.GetAuthor()
                 << ", Genre: " << book.GetGenre() << ", ISBN: " << book.GetISBN()
                 << ", Borrowed: " << yn << endl;
        }

        if ((yn != "No") || (yn != "Yes")) {
            cout << "Wrong field or book not found." << endl;
        }
    }
}

// Marks a book as borrowed by a borrower and a due date
void Library::BorrowBook(int isbn, string borrower, string dueDate) {
    vector<Book>::iterator it;

    // Finds the book by its ISBN
    it = find_if(books.begin(), books.end(), [isbn](const Book& book) {
        return book.GetISBN() == isbn;
    });

    if (it != books.end()) {
        if (!it->GetIsBorrowed()) {
            // Sets the book as borrowed and assigns the borrower and due date
            it->SetIsBorrowed(true);
            it->SetBorrowedBy(borrower);
            it->SetDueDate(dueDate);
        }

        else {
            cout << "Book is already borrowed." << endl;
        }

    }
     
    else {
        cout << "Book not found." << endl;
    }
}

// Displays all currently borrowed books
void Library::DisplayBorrowedBooks() const {
    for (auto& book : books) {
        if (book.GetIsBorrowed()) {
            // Displays the details of each borrowed book
            cout << "Title: " << book.GetTitle() << ", Author: " << book.GetAuthor()
                 << ", Genre: " << book.GetGenre() << ", ISBN: " << book.GetISBN()
                 << ", Borrowed By: " << book.GetBorrowedBy() << ", Due Date: " << book.GetDueDate() << endl;
        }
    }
}
