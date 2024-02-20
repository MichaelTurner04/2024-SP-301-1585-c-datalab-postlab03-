#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {
    ifstream input_file("story.txt");
    ofstream output_file("updated_story.txt");
    string storyLine;
    
    while(getline(input_file, storyLine)) {
        size_t hashtag = storyLine.find('#');
        if(hashtag != string::npos) { 
            storyLine[hashtag] = ' '; 
        }
        output_file << storyLine << endl;
    }
    
    input_file.close();
    output_file.close();

    return 0;
}

