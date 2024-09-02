#ifndef LIBRARYH
#define LIBRARYH

#include "Book.h"
#include <string>
#include <vector>
using namespace std;

// The Library class manages a collection of books.
class Library {
    private:
        // Private member vector to hold a collection of books
        vector<Book> books;

    public:
        // Methods to manage the library collection
        
        // Adds a new book to the collection
        void AddBook(Book newBook);  

        // Removes a book from the collection by its ISBN
        void RemoveBook(int isbn);

        // Edits the details of an existing book by its ISBN
        void EditBook(int isbn, Book updatedBook);

        // Displays all books in the collection
        void DisplayBooks() const;

        // Searches for books by a specific field (title, author, genre, or ISBN)
        void SearchBooks(string query, string field) const; 

        // Marks a book as borrowed by a borrower and a due date
        void BorrowBook(int isbn, string borrower, string dueDate);

        // Displays all currently borrowed books
        void DisplayBorrowedBooks() const;
};

#endif
