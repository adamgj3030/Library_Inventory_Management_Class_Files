# Library-Inventory-Management-Class-Files
C++ Class and Test Files for a Library Inventory Management System


Class Book:
Must have these private data members:
- string title
- string author
- string genre
- int isbn
- bool isBorrowed
- string borrowedBy
- string dueDate

Must have these public member functions:
- Book(string userTitle = "noTitle", string userAuthor = "noAuthor", string userGenre = "noGenre", int userISBN = -1, bool userIsBorrowed = false, string userBorrowedBy = "noBorrowedBy", string userDueDate = "noDueDate")
- Initializes the title, author, genre, isbn, isBorrowed, borrowedBy, and dueDate data members.
- void SetTitle(string userTitle)
- Set the book's title to the provided parameter userTitle.
- void SetAuthor(string userAuthor)
- Set the book's author to the provided parameter userAuthor.
- void SetGenre(string userGenre)
- Set the book's genre to the provided parameter userGenre.
- void SetISBN(int userISBN)
- Set the book's ISBN to the provided parameter userISBN.
- void SetIsBorrowed(bool userIsBorrowed)
- Set the book's isBorrowed status to the provided parameter userIsBorrowed.
- void SetBorrowedBy(string userBorrowedBy)
- Set the book's borrowedBy to the provided parameter userBorrowedBy.
- void SetDueDate(string userDueDate)
- Set the book's due date to the provided parameter userDueDate.
- string GetTitle() const
- Return the book's title.
- string GetAuthor() const
- Return the book's author.
- string GetGenre() const
- Return the book's genre.
- int GetISBN() const
- Return the book's ISBN.
- bool GetIsBorrowed() const
- Return whether the book is currently borrowed.
- string GetBorrowedBy() const
- Return the name of the person who borrowed the book.
- string GetDueDate() const
- Return the book's due date.


Class Library using derived class Book:
Must have these private data members:
- vector<Book> books

Must have these public member functions:
- void AddBook(Book newBook)
- Add a new book to the library inventory.
- void RemoveBook(int isbn)
- Remove a book from the library inventory using its ISBN.
- void EditBook(int isbn, Book updatedBook)
- Edit the details of a book in the library inventory using its ISBN.
- void DisplayBooks() const
- Display all books in the library inventory with their details.
- void SearchBooks(string query, string field) const
- Search for books in the library inventory by title, author, genre, or ISBN.
- void BorrowBook(int isbn, string borrower, string dueDate)
- Mark a book as borrowed, assigning it to a borrower and setting a due date.
- void DisplayBorrowedBooks() const
- Display a list of all borrowed books along with the borrower's name and due date.
