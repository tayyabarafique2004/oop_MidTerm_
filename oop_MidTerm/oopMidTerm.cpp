
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
class Book {
public:
	string bookTitle;
	string publishedYear;
	string author;
	string price;

	Book(string title, string py, string a, string p) : bookTitle(title), publishedYear(py), author(a), price(p) {}
};
class ShoppingCart {
private:
	vector<Book>books{};
	vector<string>cartItems;
public:

	void addBook(Book& bookTitle) {}
	void displayCart(vector<Book>& books) {
		cout << "books in cart are: " << endl;
		for (auto it = books.begin(); it != books.end(); ++it) {
			cout << it->bookTitle << endl;
			cout << it->publishedYear << endl;
			cout << it->author << endl;
			cout << it->price << endl;
		}
	}
	void checkoutBook(vector<Book>books) {
		cout << "the books you bought are: " << endl;

		for (auto it = books.begin(); it != books.end(); ++it) {
			cout << it->bookTitle << endl;
			cout << it->publishedYear << endl;
			cout << it->author << endl;
			cout << it->price << endl;
		}
		cout << "the total price of the books you bought is: " << endl;
		cout << 92900 << "$"<<endl;
		cout << endl;
	}
};

int main() {

	ShoppingCart cart;
	vector<Book>books = { Book("jannat k patty","Nimra Ahmed","2001","1000"),Book("mushaf","nimra Ahmed","2000","700")
	,Book("mushaf","nimra Ahmed","2000","700"),Book("mushaf","nimra Ahmed","2000","700"),Book("mushaf","nimra Ahmed","2000","700") };
	vector<string>cartItems;
	cart.addBook(books[0]);
	cart.addBook(books[1]);
	cart.addBook(books[2]);
	cart.addBook(books[3]);
	cart.addBook(books[4]);

	while (true) {

		cout << "Welcome to Online Book Shop!!!" << endl;
		cout << "books available to buy are:   " << endl;
		cout << endl;
		string bookt;
		string publishedyear;
		string author;
		string price;
		cout << "Press" << endl << "1. to add books to cart" << endl << "2. to display cart " << endl << "3. to checkout" << endl;
		int choice;
		cin >> choice;
		if (choice == 1) {

			cout << "enter name of book to add:  ";
			cin.ignore();
			getline(cin, bookt);
			
			cout << "enter published year of book to add:  ";
			cin.ignore();

			getline(cin, publishedyear);
			cout << "enter author of book to add:  ";
			cin.ignore();

			getline(cin, author);
			cout << "enter price of book to add:  ";
			cin.ignore();

			getline(cin, price);
			Book book(bookt, publishedyear, author, price);
			cout << bookt << "is added to cart successfully!  " << endl;
			cart.addBook(book);
		}
		else if (choice == 2)
			cart.displayCart(books);


		else if (choice == 3)

			cart.checkoutBook(books);
		else

			cout << "invalid choice!  ";
	}



	return 0;


}
