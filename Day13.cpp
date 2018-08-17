// Write your MyBook class here
class MyBook : public Book {
    public:
        int price = 0;
    MyBook(string t, string a, int price) : Book(t, a){
        this->price = price;
    }
    void display(){
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }


};
    //   Class Constructor
    //
    //   Parameters:
    //   title - The book's title.
    //   author - The book's author.
    //   price - The book's price.
    //
    // Write your constructor here


    //   Function Name: display
    //   Print the title, author, and price in the specified format.
    //
    // Write your method here

// End class
int main() {
    string title,author;
    int price;
    getline(cin,title);
    getline(cin,author);
    cin>>price;
    MyBook novel(title,author,price);
    novel.display();
    return 0;
}
