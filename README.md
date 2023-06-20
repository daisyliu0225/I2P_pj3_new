# NTHU I2P3   MiniChess AI

This is the final project for I2P2 course. It takes up 9 pts for the final score. <br />
It is used to design and implement an AI that can play the boardgame chess.

## What I did

### The Minimax Method: <br />
The minimax tree chooses the maximum when it is the player's turn and chooses the minimum when it is the opponent's turn. <br />
The psudocode: <br />
![minimax](https://github.com/daisyliu0225/I2P_pj3_new/assets/50540881/947ae5cc-f9c9-4bdf-b088-89f8abea0155)
<br />
The code I wrote: <br />
Get move function: <br />
![minimax_getmove](https://github.com/daisyliu0225/I2P_pj3_new/assets/50540881/a6614fbd-e5cb-440b-9cfc-97a4ccac1d29)
<br />
Minimax Function: <br />
![minimax_minimax](https://github.com/daisyliu0225/I2P_pj3_new/assets/50540881/c284c831-df39-4734-bda3-5cf4efda567e)
<br />

### The Alpha-Beta Method: <br />
By pruning the branches of the minimax tree. We can get a much faster algorithm. <br />

The psudocode: <br />
![alpha_beta](https://github.com/daisyliu0225/I2P_pj3_new/assets/50540881/fa11f974-220a-44ef-950e-4ccc60e3a93d)
<br />
The code I wrote: <br />
Get move function: <br />
![alpha_beta_get_move](https://github.com/daisyliu0225/I2P_pj3_new/assets/50540881/bb259841-15bd-49c6-ad9a-8c0a26e85801)
<br />
Alpha Beta function: <br />
![alpha_beta_get_alphabeta](https://github.com/daisyliu0225/I2P_pj3_new/assets/50540881/9190f68f-5091-4ae4-8af0-58c657424d69)
<br />

## versions


### V1 -- Minimax Version
Create repo <br />
The last one seem to crash and the way to access is way~~~ to troublesome <br />
--2023/06/17 12:30 AM <br />

Create minimax files and ensure it can move <br />
--2023/06/17 1:00 AM <br />

Write the minimax files and compile. <br />
It passed compiler but cannot move, it may be because of the evaluation <br />
--2023/06/17 10:22:20 AM <br />

Finished evaluation function <br />
--2023/06/17 11:15:19 AM <br />

Minimax bug problem fixed. <br />
I ignored the depth.QQ <br />
The version now can successfully beat the random player, but cannot beat the minimax player. <br />
Evaluation should be renewed. <br />
--2023/06/18 21:37:00 PM <br />

Depth of minimax is 5. <br />
--2023/06/18 21:45:15 PM <br />

### V2 -- Updated Evaluation Function Version
Update the evaluation function <br />
The last one may be too weak. I renewed the function by adding where the chesspieces are.
> Some of the reference comes from here : https://www.managertoday.com.tw/eightylife/article/view/673?/article/view/673

--2023/06/18 22:36:56 PM <br />

Update the evaluation function <br />
The last evaluation function is weak, though it can beat the random one, it cannot beat baseline2. <br />
Tried another function and it made draws with baseline2.<br />
> reference : https://www.freecodecamp.org/news/simple-chess-ai-step-by-step-1d55a9266977/

--2023/06/18 23:50:45PM <br />

### V3 -- Alpha Beta Pruning Version
Create alpha_beta files <br />
--2023/06/19 00:09:10 AM <br />

Finished alpha beta pruning <br />
--2023/06/19 23:02:25 PM <br />

### V4 -- Fix Bugs
Fixed bugs and update evaluation function. <br />
--2023/06/20 21:33:10 PM <br />

## no-so-important-feelings

Why am I here doing this? <br />
I should be playing games and socializing with my friends now... <br />
--2023/06/16 <br />
<br />
I ate two meals of fast food. The clerk asked me why am I here. <br />
I said that I have to deal with my final project. She told me not to give up. <br />
--2023/06/17 <br />
<br />
I wandered around the school with my roommates because I cannot deal with the "Invalid action" problem. <br />
After wandering, I decided to go home. <br />
--2023/06/17 <br />
<br />
Cannot deal with the Invalid action and asked TA using eeclass. <br />
Frustrated. <br />
--2023/06/18 <br />
<br />
Finally found the problem!<br />
It is because I ignored the depth!<br />
Closer to finish the project!<br />
--2023/06/18 <br />
<br />
Oh no! Server has crashed. TT <br />
--2023/06/19 <br />
<br />
Have some fun with my friends :) <br />
Start coding! <br />
--2023/06/19 <br />
<br />
Finished alpha beta pruning! <br />
It is really fast! Wow! <br />
--2023/06/19 <br />
<br />
Draw...TAT <br />
--2023/06/20 <br />
Finished! <br />
--2023/06/20 <br />
