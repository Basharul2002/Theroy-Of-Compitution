// Alphabet = {0,1}
// Language = {w|w is a string has at least two 1's}

#include<bits/stdc++.h>
using namespace std;

// If number of 0 is even then then ACCPECT else REJECT
enum State
{
    FIRST_ONE_FOUND,
    ACCPECT, 
    REJECT
};
    
State currentState;
    

        
bool isAccpected(State currentState)
{
    return currentState == ACCPECT;
}
        

State processInput(State currentState, char input)
{
    if(input == '1' && currentState == REJECT)
        return FIRST_ONE_FOUND;
        
    
    if(input == '1' && currentState == FIRST_ONE_FOUND)
        return ACCPECT;
    
    
        
    else
        return currentState;
}


int main()
{
    State currentState = REJECT;
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


    
