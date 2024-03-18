// Alphabet = {0,1}
// Language = {w|w is a bit string that containing odd number of 1's}

#include<bits/stdc++.h>
using namespace std;

// If number of 1 is odd then then ACCPECT else REJECT
enum State
{
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
        return ACCPECT;
        
    
    if(input == '0' && currentState == ACCPECT)
        return ACCPECT;
    
        
    else
        return REJECT;
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


    
