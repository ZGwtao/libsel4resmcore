
# Overview

A buddy-system based phsical memory allocator, built on top of SeL4 Micro-kernel, runs as one user-level
program, is provided here. Inspired by libsel4allocman from seL4_Libs. The buddy-system is implemented
by utilizing bitmap mechanism, which ultimately constructs one virtual binary tree, to managment the cap
pointers because of the access-control protection model on those memory region abstractions (Untyped obj)
of SeL4 Micro-kernel.
