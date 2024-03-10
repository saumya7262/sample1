#include <iostream>
#include <string>

using namespace std;

class User {
private:
    string name;
    int birth_year;
    int birth_day;
    int birth_month;
    double salary;

public:
    User(const string& n, int by, int bd, int bm, double sal)
        : name(n), birth_year(by), birth_day(bd), birth_month(bm), salary(sal) {}

    int operator==(const User& other) const {
        if (birth_year < other.birth_year)
            return 1; 
        else if (birth_year > other.birth_year)
            return -1; 
        else {
            if (birth_month < other.birth_month)
                return 1;
            else if (birth_month > other.birth_month)
                return -1;
            else {
                if (birth_day < other.birth_day)
                    return 1;
                else if (birth_day > other.birth_day)
                    return -1;
                else
                    return 0; 
            }
        }
    }

    double operator+(const User& other) const {
        return (salary + other.salary) / 2.0;
    }

    User operator+(double percentage) const {
        double increment = salary * (percentage / 100.0);
        User new_User = *this;
        new_User.salary += increment;
        return new_User;
    }

    void display() const {
        cout << "Name: " << name << endl;
        cout << "Birth Year: " << birth_year << endl;
        cout << "Birth Day: " << birth_month << endl;
        cout << "Birth Month: " << birth_day << endl;
        cout << "Salary: $" << salary << endl<<endl;
    }
};

int main() {
    User User1Obj("Jack", 2001,5 ,8 , 55000.0);
    User User2Obj("Noah", 2003,3 ,5 , 50000.0);

    int result = User1Obj == User2Obj;
    cout << "Comparison result: " << result << endl;

    double average_sal = User1Obj + User2Obj;
    cout << "Average Salary: $" << average_sal << endl;

    User User1ObjWith_increment = User1Obj + 5; 
    User User2ObjWith_increment = User2Obj + 10; 


    cout << "\nUser 1 after increment: ";
    User1ObjWith_increment.display();

    cout << "User 2 after increment: ";
    User2ObjWith_increment.display();

    return 0;
}

