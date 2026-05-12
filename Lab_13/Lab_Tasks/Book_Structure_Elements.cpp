#include <iostream>
#include <string>

using namespace std;

struct Book {
    string title;
    string author;
    float price;
    int pages;
};

int main() {
    Book book1 = {"The C++ Programming Language", "Bjarne Stroustrup", 45.50f, 1366};
    Book book2 = {"Clean Code", "Robert C. Martin", 32.75f, 464};

    cout << "Book 1 Information:" << endl;
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Price: $" << book1.price << endl;
    cout << "Pages: " << book1.pages << endl;

    cout << endl;

    cout << "Book 2 Information:" << endl;
    cout << "Title: " << book2.title << endl;
    cout << "Author: " << book2.author << endl;
    cout << "Price: $" << book2.price << endl;
    cout << "Pages: " << book2.pages << endl;

    return 0;
}
