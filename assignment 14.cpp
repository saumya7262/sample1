#include <iostream>
#include <string>
using namespace std;

class Word_Counter {
private:
    string* txt;

public:
    Word_Counter(string input) {
        txt = new string(input);
    }

    int get_Total_Words() {
        int count = 0;
        bool inWord = false;

        for (char& c : *txt) {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                if (!inWord) {
                    inWord = true;
                    count++;
                }
            } else {
                inWord = false;
            }
        }

        return count;
    }

    ~Word_Counter() {
        delete txt;
    }
};

int main() {
    Word_Counter word("Chitkara University");
    cout << word.get_Total_Words() << endl;
    return 0;
}

