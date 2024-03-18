// Alphabet = {0,1}
// Language = {w|w is a string has at most two 1's}

#include<bits/stdc++.h>
using namespace std;

enum State
{
    FIRST_ONE_FOUND,
    TWO_ONE_FOUND,
    ACCPECT, 
    REJECT
};
    
State currentState;
    

        
bool isAccpected(State currentState)
{
    return (currentState == FIRST_ONE_FOUND || currentState == TWO_ONE_FOUND || currentState == ACCPECT);
}
        

State processInput(State currentState, char input)
{
    if(input == '1' && currentState == ACCPECT)
        return FIRST_ONE_FOUND;
        
    
    else if(input == '1' && currentState == FIRST_ONE_FOUND)
        return TWO_ONE_FOUND;
        
    else if(input == '0' && (currentState == FIRST_ONE_FOUND || currentState == TWO_ONE_FOUND || currentState == ACCPECT))
        return ACCPECT;
    
    
    else
        return REJECT;
}


int main()
{
    State currentState = ACCPECT;
    string input;
    
    cout<<"Enter the bit string: ";
    cin>>input;
    
    for(char c: input)
    {
        if(c !='0' && c != '1')
        {
            cout<<"Invalid Input\n";
            return 0;
        }
        
        currentState = processInput(currentState, c);
    }
    
    if(isAccpected(currentState))
        cout<<"Accepted\n";
    
    else
        cout<<"Rejected\n";
    

    return 0;
}


    
