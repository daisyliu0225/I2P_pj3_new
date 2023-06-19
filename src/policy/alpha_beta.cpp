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
  
  //std::cout<<"crash"<<std::endl;
  int sz = state->legal_actions.size();
  int bestmove = 0;
  int bestvalue = std::numeric_limits<int>::min();
  int mininf = std::numeric_limits<int>::min();
  int maxinf = std::numeric_limits<int>::max();
  for(int i=0;i<sz;i++){
    int value = getalphabeta(state->next_state(state->legal_actions[i]), depth-1, mininf, maxinf);
    if(value > bestvalue){
      bestmove = i;
      bestvalue = value;
    }
  }
  return state->legal_actions[bestmove];
}

int Alpha_Beta::getalphabeta(State *state, int depth, int alpha, int beta){
  if(depth == 0 || state->legal_actions.size()==0){
    return state->evaluate();
  }
  // if the tree goes to the final node or reaches the lowest depth, then it gives back the value

  int sz = state->legal_actions.size();
  if(state->player){
    //it is time for the player(you) to choose
    int player_best = std::numeric_limits<int>::min();
    for(int i=0;i<sz;i++){
      int value = getalphabeta(state->next_state(state->legal_actions[i]), depth-1, alpha, beta);
      if(player_best < value) player_best = value;
      if(value >= beta) break;
      if(alpha < value) alpha = value;
    }
    return player_best;
  }else if(!state->player){
    //it is time for your opponent to choose, he or she should choose the min, which can possibly beat you
    int opp_best = std::numeric_limits<int>::max();
    for(int i=0;i<sz;i++){
      int value = getalphabeta(state->next_state(state->legal_actions[i]), depth-1, alpha, beta);
      if(opp_best > value) opp_best = value;
      if(value <= alpha) break;
      if(beta > value) beta = value;
    }
    return opp_best;
  }
  return 0;
}