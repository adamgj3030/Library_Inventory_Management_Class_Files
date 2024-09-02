#include "Book.h"

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

// Constructor to initialize a Book object with default or user-provided values
Book::Book(string userTitle, string userAuthor, string userGenre, int userISBN, 
            bool userIsBorrowed, string userBorrowedBy, string userDueDate) {
    title = userTitle;
    author = userAuthor;
    genre = userGenre;
    isbn = userISBN;
    isBorrowed = userIsBorrowed;
    borrowedBy = userBorrowedBy;
    dueDate = userDueDate;
}

// Setter methods to modify book details
void Book::SetTitle(string userTitle) {
    title = userTitle;
}

void Book::SetAuthor(string userAuthor) {
    author = userAuthor;
}
        
void Book::SetGenre(string userGenre) {
    genre = userGenre;
}

void Book::SetISBN(int userISBN) {
    isbn = userISBN;
}

void Book::SetIsBorrowed(bool userIsBorrowed) {
    isBorrowed = userIsBorrowed;
}

void Book::SetBorrowedBy(string userBorrowedBy) {
    borrowedBy = userBorrowedBy;
}

void Book::SetDueDate(string userDueDate) {
    dueDate = userDueDate;
}

// Getter methods to access book details
string Book::GetTitle() const {
    return title;
}

string Book::GetAuthor() const {
    return author;
}
        
string Book::GetGenre() const {
    return genre;
}

int Book::GetISBN() const {
    return isbn;
}

bool Book::GetIsBorrowed() const {
    return isBorrowed;
}

string Book::GetBorrowedBy() const {
    return borrowedBy;
}

string Book::GetDueDate() const {
    return dueDate;
}

