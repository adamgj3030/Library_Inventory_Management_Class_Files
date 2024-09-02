#ifndef BOOKH
#define BOOKH

#include <string>
using namespace std;

// Book class manages common properties of a book.
class Book {
    private:
        // Private member variables representing book details
        string title;
        string author;
        string genre;
        int isbn;
        bool isBorrowed;
        string borrowedBy;
        string dueDate;

    public:
        // Constructor to initialize a Book object with default or user-provided values
        Book(string userTitle = "noTitle", string userAuthor = "noAuthor", string userGenre = "noGenre", 
        int userISBN = -1, bool userIsBorrowed = 0, string userBorrowedBy = "noBorrowedBy", 
        string userDueDate = "noDueDate" );

        // Setter methods to modify book details
        void SetTitle(string userTitle);

        void SetAuthor(string userAuthor);
        
        void SetGenre(string userGenre);

        void SetISBN(int userISBN);

        void SetIsBorrowed(bool userIsBorrowed);

        void SetBorrowedBy(string userBorrowedBy);

        void SetDueDate(string userDueDate);

        // Getter methods to access book details
        string GetTitle() const;

        string GetAuthor() const;
        
        string GetGenre() const;

        int GetISBN() const;

        bool GetIsBorrowed() const;

        string GetBorrowedBy() const;

        string GetDueDate() const;

};

#endif
