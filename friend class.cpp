#include <iostream>

// Forward declaration of the FriendClass
class FriendClass;

// Class with private and protected members
class MyClass {
private:
    int privateMember;

protected:
    int protectedMember;

public:
    MyClass() : privateMember(10), protectedMember(20) {}

    // Declaration of FriendClass as a friend
    friend class FriendClass;
};

// FriendClass that can access private and protected members of MyClass
class FriendClass {
public:
    void displayMembers(const MyClass& obj) {
        // Accessing private and protected members of MyClass
        std::cout << "Accessing privateMember: " << obj.privateMember << std::endl;
        std::cout << "Accessing protectedMember: " << obj.protectedMember << std::endl;
    }
};

int main() {
    // Creating objects of MyClass and FriendClass
    MyClass myObject;
    FriendClass friendObject;

    // Accessing private and protected members of MyClass using FriendClass
    friendObject.displayMembers(myObject);

    return 0;
}

