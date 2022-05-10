#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<< "Enter an input " <<endl;
    getline(cin,s);
    cout<<"The lexical analysis of the given input is :"<<endl;
    stringstream str(s);
    string ch;
    while(str>>ch)
    {
        if(ch == "if" || ch == "else" ||
        ch == "while" || ch == "do" ||
        ch == "break" ||  ch == "continue"
        || ch == "int" || ch == "double"
        || ch == "float" || ch == "return"
        || ch == "char" || ch == "case"
        || ch == "long" || ch == "short"
        || ch == "typedef" || ch == "switch"
        || ch == "unsigned" || ch == "void"
        || ch == "static" || ch == "struct"
        || ch == "sizeof" || ch == "long"
        || ch == "volatile" || ch == "typedef"
        || ch == "enum" || ch == "const"
        || ch == "union" || ch == "extern"
        || ch == "bool")
        {
            cout<<ch<<" is a keyword"<<endl;
        }
        else if(ch[0] == ' ' || ch[0] == '+' || ch[0] == '-' || ch[0] == '*' ||
        ch[0] == '/' || ch[0] == '>' || ch[0] == '<' || ch[0] == '=' || ch[0] == '(' || ch[0] == ')' ||
        ch[0] == '[' || ch[0] == ']' || ch[0] == '{' || ch[0] == '}' ||
        ch[0] == '&' || ch[0] == '|')
        {
            cout<<ch<<" is an operator"<<endl;            
        }
        else if(ch[0] == ',' || ch[0] == ';' || ch[0] == '.')
        {
            cout<<ch<<" is a separator"<<endl;            
        }
        else if(isdigit(ch[0]))
        {
            cout<<ch<<" is a constant"<<endl;
        }
        else
        {
            cout<<ch<<" is an identifier"<<endl;
        }
    }
    return 0;
}
