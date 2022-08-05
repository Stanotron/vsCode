import automata
from automata.fa.dfa import DFA
dfa = DFA{
    states = {'qo','q1'},
    input_symbols = {'1','0'},
    transitions = {
        'qo': {'0': 'qo', '1': 'q1'}
        'q1': {'0': 'q1', '1': 'qo'}
        },
    initial_state = 'qo',
    final_states = {"q1"}
}
if(dfa.accepts_input('011')):
    print("success")
else:
    print("fail")