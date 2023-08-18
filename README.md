
# Overview

A buddy-system based phsical memory allocator (CapBuddy), built on top of seL4 microkernel, runs as one user-level program, is provided here. Inspired by libsel4allocman from [seL4_Libs](https://github.com/seL4/seL4_libs/tree/master/libsel4allocman). The buddy system is implemented by utilizing the bitmap mechanism, which constructs a virtual (regular) binary tree to manage the capability indices (CapPtr) of pre-allocated frame objects. *Managing capability indices at user mode programs and creating them once-only is of great purpose, due to the access-control protection model applied to the physical memory region abstractions (untyped objects) of the seL4 microkernel.*

(TODO): A framework, *libsel4resmcore*, has just been created, but its contents still need to be filled in. We recommend that [libsel4allocman-vbtalloc-extension](https://github.com/ZGwtao/seL4_libs-vbtalloc-extension/tree/master/libsel4allocman) by now. 
(TODO): Labor Division Approach => Should memory allocator seperates from kernel object allocator ?
