

#include <vector>
#include <string>
#include <iostream>

using namespace std;

vector<string> split (char sentence[]){
    string word="";
    vector<string> wordsVector;
    for (unsigned int i = 0; i < sizeof(sentence); i++) {
		if (sentence[i]==' ') {
			wordsVector.push_back(word);
			word="";
		} else {
			word+=sentence[i];
		}
	}
    if (word.length()>0) {
		wordsVector.push_back(word);
	}
    return wordsVector;
}
void printWords (vector<string> wordsVector){

    for (unsigned int i=0;i <wordsVector.size();i++){
         cout << wordsVector [i]<< endl;
    }

}

int main() {
	char line[100];
	cin.getline(line,100);
	printWords(split(line));
	return 0;

}
