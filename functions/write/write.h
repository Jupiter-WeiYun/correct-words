#include <cstdio>
#include <cstdlib>
#include <string>

using namespace std;

FILE *write;

write = fopen("words.txt","a");

void addWords(string word){
    fprintf(stdout,"%s;\n",word.c_str());
    return;
}

