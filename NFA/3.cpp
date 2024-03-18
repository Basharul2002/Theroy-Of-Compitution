/*
Alpahbet = {0, 1]

Language = {w|w is a bit string that starts with 0 and ends with 1}
*/


#include<bits/stdc++.h>
using namespace std;


enum State
{
   START,
   q0, 
   q1,
   q2
};

bool start = false;
bool isAccepted(State currentState) 
{
    return currentState == q2;
}


State processInput(State currentState, char input)
{
    if(currentState == START && input == '0')
    {
        start = true;
        return q1;
    }
    
    
    else if(start)
    {
        if(currentState == q1 && input == '1')
            return q2;
            
        else 
            return q1;
    }
    
    return q0;
}


int main() 
{
    string input;
    cout<<"Enter a bit string: ";
    cin>>input;
    State currentState = START;
    
    for(char c: input)
    {
        if(c != '0' && c != '1')
        {
            cout<<"Invalid Input\n";
            return 0;
        }
        
        currentState = processInput(currentState, c);
    }

    if (isAccepted(currentState)) 
        cout<<"Accepted\n";
    
    
    else 
        cout<<"Rejected\n";
    

    return 0;
}
