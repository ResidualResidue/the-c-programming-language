#include <iostream> // File in the standard library

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
    std::cout << "Hello, world!" << std:: ;
    return 0;
}