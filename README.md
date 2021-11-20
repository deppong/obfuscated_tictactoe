# Obfuscated C Code is FUN!
## Tic tac toe


solutions for tic tac toe

positions
0 | 1 | 2
--+--+--
3 | 4 | 5
--+--+--
6 | 7 | 8

x|o|x
-+-+-
0x2b0x2d

values
0 = nothing
1 = X
2 = O

solutions
0 1 2
3 4 5
6 7 8
0 3 6
1 4 7
2 5 8
0 4 8
2 4 6

solutions reorganized in a compact manner

6 0 3
3 4 5
5 2 8
8 7 6
6 4 2
2 0 1
1 7 4
4 0 8

remove overlaps on the edges
6 0 3 4 5 2 8 7 6 4 2 0 1 7 4 0 8
