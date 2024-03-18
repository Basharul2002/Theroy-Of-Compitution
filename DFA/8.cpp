// Alphabet = {0,1}
// Language = {w|w is a string that contain substring 101}

#include<bits/stdc++.h>
using namespace std;


enum State
{
    FIRST_FOUND,
    SECOND_FOUND,
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
        return FIRST_FOUND;
        
    
    else if(input == '0' && currentState == FIRST_FOUND)
        return SECOND_FOUND;
        
    else if(input == '1' && currentState == SECOND_FOUND)
        return ACCPECT;
        
        
    else if(currentState == ACCPECT)
            return ACCPECT;
    
    
    else
        return REJECT;
}


int main()
{
    string input;
    int i = 0;
    
    State currentState = REJECT;
    
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


    
