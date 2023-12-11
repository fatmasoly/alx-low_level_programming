#!/bin/bash
echo -e '#include <stdlib.h>\nvoid srand(unsigned int seed) { }' > /tmp/rand.c
gcc -Wall -fPIC -shared -o /tmp/rand.so /tmp/rand.c
LD_PRELOAD=/tmp/rand.so
