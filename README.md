# Obfuscated C Tic tac toe
## To compile
`gcc prog.c -o prog`

## some tips about how it works
- There are a lot of ternary operators which are simply `(expression to be tested)?true:false` which can shorten things quickly.
### The Y(x) Macro:
This macro selects indecies of the board from the solution list (that nasty `"VPSTURXWVTRPQWTPX"` bit). The solutions of tic tac toe
can be represented by a list of possible index combinations

```positions
0 | 1 | 2
--+--+--
3 | 4 | 5
--+--+--
6 | 7 | 8
```
solutions:
- 0 1 2
- 3 4 5
- 6 7 8
- 0 3 6
- 1 4 7
- 2 5 8
- 0 4 8
- 2 4 6



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
