gcc -std=c11 -Wall intro.c -o intro
gcc -std=c11 -Wall intro.c -o intro.in
./intro < intro.in > intro.out
