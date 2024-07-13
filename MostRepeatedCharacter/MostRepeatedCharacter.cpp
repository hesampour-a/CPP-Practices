#include <iostream>
#include <istream>
#include <string>
using namespace std;

string RemoveCharacterFromSentence(string sentence, char character) {
    

    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] == character)       
        {
           sentence = sentence.erase(i, 1);
           i--;
        }
        
    }
    return sentence;
    

}

char FindMostRepeatedCharacter(string sentence) {
    char mostRepeatedCharacter = ' ';
    int mostRepeatedCharacterCount = 0;
    int currentCharacterCount = 0;
    int sentenceLength = sentence.length();
    while (sentenceLength > 0)
    {
        for (int i = 0; i < sentenceLength; i++)
        {
            if(sentence[i] == sentence[0]){
                currentCharacterCount++;
            }

            if(currentCharacterCount > mostRepeatedCharacterCount){
                mostRepeatedCharacterCount = currentCharacterCount;
                mostRepeatedCharacter = sentence[i];
            }

         }
            currentCharacterCount = 0;
            sentence = RemoveCharacterFromSentence(sentence, sentence[0]);
            sentenceLength = sentence.length();
    }
    
   
    return mostRepeatedCharacter;
    
}




int main() {
   cout << "Enter a Sentence: \n";
   string sentence;

   getline(cin, sentence);

   cout << "Most Repeated Character: " << FindMostRepeatedCharacter(sentence);


   

    return 0;
}