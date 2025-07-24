#ifndef MYSTRING_H
#define MYSTRING_H

class Mystring
{
private:
    char* str; // pointer to a char[] that holds a C-style string
public:
    Mystring();   // No-args constructor
    Mystring(const char *s); // Overloaded Constructor
    Mystring(const Mystring &source); // Const Constructor
    ~Mystring();  // Destructor
    void display() const;
    int get_length() const;       // getters
    const char *get_str() const;

};

#endif // MYSTRING_H
