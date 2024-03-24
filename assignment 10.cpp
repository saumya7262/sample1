#include<iostream>
using namespace std;
class Book{
    public:
    string ISBN;
    string name;
    string author;
};
class Lib{
    private:
    Book book[5];
	public:
    Lib(){
		book[0] = {"9780747532699", "Harry Potter and the Philosopher's Stone", "J.K. Rowling"};
        book[1] = {"9780062073488", "And Then There Were None", "Agatha Christie"};
        book[2] = {"9789380816289", "A Midsummer Night's Dream", "William Shakespeare"};
        book[3] = {"9780140430226", "Gulliver's Travels", "Jonathan Swift"};
        book[4] = {"9781782011255", "Allice's Adventures in Wonderland", "Lewis Crroll"};
    }
	Book* search_Book(string& isbn){
      for(int i=0;i<5;i++){
        if(book[i].ISBN==isbn){
            return &book[i];
      }
    }
     return nullptr;
    }
};
int main(){
	Lib lib;
	string isbn;
    cout<< "Enter the ISBN of the book: ";
    cin>>isbn;  
	Book* book_found = lib.search_Book(isbn); 
	if(book_found != nullptr) {
		cout<<"Book is available in the library... "<<endl;
        cout<<"Name:"<<book_found->name<<endl;
        cout<<"Author:"<<book_found->author<<endl;   
    }else{
		cout << "Book is not available in the library... " << endl;
    }
    return 0;
}