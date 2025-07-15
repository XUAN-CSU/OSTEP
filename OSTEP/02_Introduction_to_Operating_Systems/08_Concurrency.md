prompt> gcc -o thread thread.c -Wall -pthread
prompt> ./thread 1000
Initial value : 0
Final value : 2000

As you probably guessed, when the two threads are finished, the final
value of the counter is 2000, as each thread incremented the counter 1000
times. Indeed, when the input value of loops is set to N, we would
expect the final output of the program to be 2N. But life is not so simple,
as it turns out. Let’s run the same program, but with higher values for
loops, and see what happens:

prompt> ./thread 100000
Initial value : 0
Final value : 143012 // huh??
prompt> ./thread 100000
Initial value : 0
Final value : 137298 // what the??

In this run, when we gave an input value of 100,000, instead of getting
a final value of 200,000, we instead first get 143,012.