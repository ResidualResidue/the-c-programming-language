#include <iostream> // File in the standard library

int a = 1;
int b = 2;

void swap(){
    extern int a, b;
    int temp = a;
    a = b;
    b = temp;
}

void display_externs(){
    extern int a, b;
    std::cout << a <<  "||" << b << " yay!\n";
}

int main(){
    /*
        std: Namespace qualifier. Prevents naming collisions.
        cout: Character output stream object; It is an instance of std::ostream, defined in the <iostream> header.
            - Global object.
            - namespace std {
                extern ostream cout;
            }
        <<: Stream insertion operator (also called “put to” operator). Inserts characters into an output stream.
    */
    const double pi = 3.14159;
    // pi = 5; // Now we can't do this!
    display_externs();
    std::cout << "Hello, world! Time to swap those two numbers!\n";
    swap();
    display_externs();
    
    /*
        Math is very similar as in C.
     */
    
    
    
    return 0;


}