// Task 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
class Book {
private:
	std::string m_sTitle;
	std::string m_sAuthor;
	int m_iNumberOfCopies;
public:
	Book(std::string sInitTitle, std::string sInitAuthor, int iInitNumberOfCopies) 
	:m_sTitle(sInitTitle), m_sAuthor(sInitAuthor), m_iNumberOfCopies(iInitNumberOfCopies)
	{

	}
	void getInformationForBook() {
		std::cout << m_sTitle << std::endl;
		std::cout << m_sAuthor << std::endl;
		std::cout << m_iNumberOfCopies << std::endl;
	}
	void decrementNumberOfCopies()
	{
		m_iNumberOfCopies--;
	}
	void incrementNumberOfCopies() {
		m_iNumberOfCopies++;
	}
	std::string getName() {
		return m_sTitle;
	}
};
class Books {
private:
	std::vector<Book>m_objBooks;
public:
	void addBook()
	{
		std::string sTitle;
		std::string sAuthor;
		int iNumberOfCopies = 0;
		std::cout << "Enter name: ";
		std::cin >> sTitle;
		std::cout << "Enter author name: ";
		std::cin >> sAuthor;
		std::cout << "Enter number of copies: ";
		std::cin >> iNumberOfCopies;
		m_objBooks.push_back({ sTitle, sAuthor, iNumberOfCopies });
	}
	void ShowAllBooks() {
		for (Book &objBook : m_objBooks)
		{
			objBook.getInformationForBook();
		}
	}
	void takeOutBook() 
	{
		std::string sBook = "";
		std::cout << "Enter a book you wish to take out: ";
		std::cin >> sBook; 
		for (Book& objBook : m_objBooks)
		{
			if (sBook == objBook.getName())
			{
				objBook.decrementNumberOfCopies();
			}
		}
	}

	void bringBackBook()
	{
		std::string sBookName;
		std::cout << "Enter the name of the book you wish to bring back: ";
		std::cin >> sBookName;
		for (Book& objBook : m_objBooks) {
			if (objBook.getName() == sBookName)
			{
				objBook.decrementNumberOfCopies();
			}
		}
	}
};

void MenuSystem() {
	std::cout << "1. Show all books available" << std::endl;
	std::cout << "2. Add a book to library" << std::endl;
	std::cout << "2. Take out a book" << std::endl;
	std::cout << "3. ";
}
int main()
{
	int iMenuSystem = 0;
	MenuSystem();
	std::cout << "Enter your selection: ";
	std::cin >> iMenuSystem;
	switch (iMenuSystem) {

	case 1:
		break;
	case 2:
		break;
	case 3:
		break;

	}
		Books objBooks;
	std::cout << "Welcome to our book take-out" << std::endl;
	objBooks.addBook();
	objBooks.ShowAllBooks();
	objBooks.takeOutBook();
	objBooks.bringBackBook();
}

