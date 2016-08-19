#include "anigram.h"

string anagram(string input)
{
    string result;
    result = input;
    if ( input.length() == 2 ) {
        result.append(" ");
        reverse(input.begin(), input.end());
        result.append(input);
    } else if ( input.length() > 2 ) {
        for ( unsigned int i = 0; i < input.length(); i++ ) {
            
        }
    }

    return result;
}
