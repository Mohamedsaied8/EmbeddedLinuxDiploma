// Create a Library that has many books, each book has an Id
// User can Add a book , Delete a book and Update book Id
// search for a specific book using it's Id


#include <iostream>
#include <vector>
#include <algorithm>

struct Book
{
    std::uint16_t id;
    std::string title;
};


class Library
{
    public:

        Library()
        {

        }

        void addBook(Book& book)
        {
            books.push_back(book);
        }

        void removeBook(std::uint16_t book_id) 
        {

            books.erase(std::remove_if(books.begin(), books.end(),
                                                                [book_id](const Book& book) 
                                                                {
                                                                    return book.id == book_id;
                                                                }),
                                                                books.end());
        }
        
        void showLibrary()
        {
            for(auto book : books)
            {
               std::cout  << "book id "<< book.id << std::endl;
            }
        }

    private:
        std::vector<Book> books;

};


int main()
{
    std::cout << "num of bytes of " << sizeof(Library) << std::endl;
   
   
    Library *lib = new Library();

    Book tech_book;
    tech_book.id = 1;
    tech_book.title = "Working Effectivy with Legacy code";
    std::cout << "size of title " << sizeof(tech_book.title) << std::endl;
    
    Book poetry_book;
    poetry_book.id = 2;
    tech_book.title = "poetry_book";

    lib->addBook(tech_book);

    lib->addBook(poetry_book);

    lib->removeBook(2);

    lib->showLibrary();

    delete lib;

    return 0;
}