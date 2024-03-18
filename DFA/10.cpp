// Alphabet = {0,1}
// Language = {w| the sum of all symbols is w is multiple of 3}

#include<bits/stdc++.h>
using namespace std;


enum State
{
    MOD0,
    MOD1,
    MOD2
};
    
State currentState;

    
bool isAccpected(State currentState)
{
    return currentState == MOD0;
}


State processInput(State currentState, char input)
{
    if(currentState == MOD0)
    {
        if(input == '0')
            return MOD0;
        
        return MOD1;
    }
    
    switch(currentState)
    {
        case MOD0:
            return (input == '0') ? MOD0:MOD1;
        
        case MOD1:
            return (input == '0') ? MOD1:MOD2;
            
        case MOD2:
            return (input == '0') ? MOD2:MOD1;
            
    }
    
    return MOD0;
}


int main()
{
    State currentState = MOD0;
    string input;
    int sum =0;
    
    cout<<"Enter the bit string: ";
    cin>>input;
    
    for(char c: input)
    {
        if(c !='0' && c != '1')
        {
            cout<<"Invalid Input\n";
            return 0;
        }
        
        sum += c-'0';
    }
    
    currentState = processInput(currentState, sum%3 + '0');
    if(isAccpected(currentState))
        cout<<"Accepted\n";
    
    else
        cout<<"Rejected\n";

    return 0;
}


    
