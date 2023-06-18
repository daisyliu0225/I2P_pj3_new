#include <cstdlib>
#include <iostream>
#include <limits>

#include "../state/state.hpp"
#include "./alpha_beta.hpp"


/**
 * @brief get a legal action throught minimax
 * 
 * @param state Now state
 * @param depth You may need this for other policy
 * @return Move 
 */

Move Alpha_Beta::get_move(State *state, int depth){
  if(!state->legal_actions.size())
    state->get_legal_actions();
  
  std::cout<<"crash"<<std::endl;
  int sz = state->legal_actions.size();
  int bestmove = 0;
  int bestvalue = std::numeric_limits<int>::min();
  for(int i=0;i<sz;i++){
    int value = getminimax(state->next_state(state->legal_actions[i]), depth-1);
    if(value > bestvalue){
      bestmove = i;
      bestvalue = value;
    }
  }
  return state->legal_actions[bestmove];
}

int Alpha_Beta::getminimax(State *state, int depth){
  if(depth == 0 || state->legal_actions.size()==0){
    return state->evaluate();
  }
  // if the tree goes to the final node or reaches the lowest depth, then it gives back the value

  int sz = state->legal_actions.size();
  if(state->player){
    //it is time for the player(you) to choose
    int player_best = std::numeric_limits<int>::min();
    for(int i=0;i<sz;i++){
      int value = getminimax(state->next_state(state->legal_actions[i]), depth-1);
      if(player_best < value) player_best = value;
    }
    return player_best;
  }else if(!state->player){
    //it is time for your opponent to choose, he or she should choose the min, which can possibly beat you
    int opp_best = std::numeric_limits<int>::max();
    for(int i=0;i<sz;i++){
      int value = getminimax(state->next_state(state->legal_actions[i]), depth-1);
      if(opp_best > value) opp_best = value;
    }
    return opp_best;
  }
  return 0;
}