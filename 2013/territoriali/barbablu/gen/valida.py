#!/usr/bin/env python2

from limiti import *

from sys import argv, exit, stderr
import os

def usage():
    print >> stderr, "Usage: %s file_input.txt" % \
        os.path.basename(argv[0])
    exit(1)

def run(f):
    N, M, C, K, = [int(x) for x in f[0].split()]
    assert(len(f) == M+2)
    assert(1 <= N <= MAXN)
    assert(1 <= M <= MAXM)
    return 0 # Input corretto

if __name__ == "__main__":
    if len(argv) < 2:
        usage()

    f = open(argv[1]).readlines()
    exit(run(f))


