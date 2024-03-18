// Alphabet = {0,1}
// Language = {w|w is a bit string that containg even number of 0's}

#include<bits/stdc++.h>
using namespace std;

// If number of 0 is even then then ACCPECT else REJECT
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
    if(input == '0' && currentState == REJECT)
        return ACCPECT;
        
    
    if(input == '1' && currentState == ACCPECT)
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


    
