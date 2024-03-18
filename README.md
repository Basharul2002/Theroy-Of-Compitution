# Theory of Computation

This repository contains C++ implementations of various concepts in the theory of computation, including Deterministic Finite Automata (DFA), Nondeterministic Finite Automata (NFA), Regular Expressions (RE), and conversions between them.

## Contents

1. [DFA (Deterministic Finite Automaton)](#dfa)
2. [NFA (Nondeterministic Finite Automaton)](#nfa)
3. [RE (Regular Expressions)](#re)
4. [Conversions](#conversions)
   - [RE to DFA](#re-to-dfa)
   - [NFA to DFA](#nfa-to-dfa)

## DFA (Deterministic Finite Automaton) <a name="dfa"></a>

The DFA implementation includes functionalities to create, manipulate, and simulate a Deterministic Finite Automaton. DFA is represented using a transition table, and operations such as acceptance of strings and minimizing DFA are supported.

## NFA (Nondeterministic Finite Automaton) <a name="nfa"></a>

The NFA implementation provides features for constructing and operating on Nondeterministic Finite Automata. It supports epsilon transitions and can simulate the behavior of NFAs for input strings.

## RE (Regular Expressions) <a name="re"></a>

Regular expressions are implemented with functionalities for pattern matching and string validation. The implementation supports basic regular expression syntax and operations such as concatenation, alternation, and closure.

## Conversions <a name="conversions"></a>

### RE to DFA <a name="re-to-dfa"></a>

This conversion module converts regular expressions to equivalent Deterministic Finite Automata. It involves parsing the regular expression, constructing the corresponding GNFA, and then converting the GNFA to a DFA using subset construction.

### NFA to DFA <a name="nfa-to-dfa"></a>

The NFA to DFA conversion module converts a Nondeterministic Finite Automaton to an equivalent Deterministic Finite Automaton. It applies the subset construction algorithm to generate the corresponding DFA from the given NFA.

## Usage

Each module within the repository includes detailed documentation and example usage in C++ code. Users can explore the implementations, run simulations, and perform conversions by following the provided guidelines.

## Contributions

Contributions to enhance and expand the functionalities of this repository are welcome. Feel free to submit pull requests with improvements, bug fixes, or additional features related to the theory of computation.
