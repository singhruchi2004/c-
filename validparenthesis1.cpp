#include<iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int parenthesis(char s[5]) {
    char stack[5];
    int top = -1;
    int count = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            stack[++top] = s[i];
        } else if ((s[i] == ')' || s[i] == '}' || s[i] == ']') && top != -1) {
            if ((s[i] == ')' && stack[top] == '(') ||
                (s[i] == '}' && stack[top] == '{') ||
                (s[i] == ']' && stack[top] == '[')) {
                top--;
                count += 1;
            } else {
                count = 0;
            }
        }
    }

    if (top == -1 && count > 0) {
        cout<<"true";
        return 1;  
    } else {
       cout<<"false"<<endl;
        return 0;  
    }
}

int main() {
    char s[50];  
    cout<<"Enter a string that contains only parentheses:";
    cin>>s;
    parenthesis(s);

    return 0;
}
