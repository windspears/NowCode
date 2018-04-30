#include<bits/stdc++.h>

using namespace std;
 
bool isInputRight(char input){
    if((input >= 'A' && input <= 'Z') || (input >= 'a' && input <= 'z'))
        return true;
    else
        return false;
}
 
int main(){
//本题借鉴了别人的思路，即用栈来进行判断输出！
    string input;
     
    while(getline(cin, input)){
        string temp;
        stack<string> hehe;
        bool flag = false;
         
        int len = input.size();
         
        for(int i = 0; i <= len; ++i){
            if(isInputRight(input[i])){
                temp += input[i];
                flag = true;
            }
            else if(!isInputRight(input[i]) && flag == true){
                flag = false;
                hehe.push(temp);
                temp.clear();
            }
        }
         
        while(!hehe.empty()){
            cout << hehe.top();
            hehe.pop();
            if(!hehe.empty())
                cout << ' ';
            else
                cout << endl;
        }
    }
     
    return 0;
}
