#include <iostream>
#include <algorithm>
using namespace std;
char table[6][6] = {{'0','1','2','3','4','5'},
                    {'1','A','B','C','D','E'},
                    {'2','F','G','H','I','K'},
                    {'3','L','M','N','O','P'},
                    {'4','Q','R','S','T','U'},
                    {'5','V','W','X','Y','Z'}};

void keys_table(){
    string keys;
    int a = 1, b = 1;
    cout << "Enter keys for both rows and column: ";
    getline(cin,keys);

    for (int i = 0; i < keys.length(); i++){
        table[0][b] = keys[i];
        table[a][0] = keys[i];
        b += 1;
        a += 1;
    }
};
void encryption(string text){
    char row, col;
    for (int i = 0; i < text.length(); i++){
        if (text[i] >= 'a' && text[i] <= 'z')
            text[i] = text[i] - 32;
    }
    cout << "Cipher text: "<<endl;
    for (int i = 0; i < text.length(); i++){
        for (int r = 1; r < 6; r++){
            for (int c = 1; c < 6; c++){
                if (text[i] == 'J'){
                    text[i] = 'I';
                }                
                if (text[i] == table[r][c]){
                    row = table[r][0];
                    col = table[0][c];
                    cout << row << col;
                }
            }
        }
    }  
};
