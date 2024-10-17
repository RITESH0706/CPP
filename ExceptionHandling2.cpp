#include <iostream>
#include <stdexcept>
#include <string>
using namespace std;

class Person {
private:
    string name;
    string personID;

public:
    Person(const string& n, const string& id) : name(n), personID(id) {}

    void setName(const string& n) {
        if (isValidName(n)) {
            name = n;
        } else {
            throw invalid_argument("Invalid name!");
        }
    }

    void setPersonID(const string& id) {
        if (isValidPersonID(id)) {
            personID = id;
        } else {
            throw invalid_argument("Invalid person ID!");
        }
    }

    string getName() const {
        return name;
    }

    string getPersonID() const {
        return personID;
    }

private:
    bool isValidName(const string& n) const {
       
        return !n.empty();
    }

    bool isValidPersonID(const string& id) const {
        
        return id.length() == 6;
    }
};

int main() {
    try {
        Person person("Vicky Singh", "12345678"); 
        cout << "Name: " << person.getName() << endl;
        cout << "Person ID: " << person.getPersonID() << endl;

        person.setName(""); 
        cout << "Name: " << person.getName() << endl; 
        cout << "Person ID: " << person.getPersonID() << endl;

    } catch (const std::invalid_argument& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}

