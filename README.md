# Introduction

This repository is to show how to integrate python pulp with multiprocessing library to solve optimization probelms.

# Why to use multi-processing?

Python provides several ways to run tasks concurrently or parallelly, multi-threading, multi-processing, greenlet/gevent, etc. However, due to the existence of GIL (global interpretor lock), multi-threading or greenlet suits only I/O bound tasks, which  performs poorly in CPU-bound tasks. Therefore, we will discuss how to integrate pulp with multiprocessing in the case of CPU intensive optimization tasks.

# Basic programming idioms

import pulp
import multiprocessing as mp
from multiprocessing import Pool as ppool

def optimize(R):
    variables = ["x1","x2","x3","x4"]
    costs = {"x1":R[0], "x2":R[1], "x3":R[2], "x4":R[3]}
    constraint = {"x1":5, "x2":7, "x3":4, "x4":3}
    ...

def main():
    data_input = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
    exec_pool = ppool(mp.cpu_count())
    results = exec_pool.map(optimize, enumerate(data_input))
 
