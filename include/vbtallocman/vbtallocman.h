
#pragma once

#include <assert.h>
#include <autoconf.h>

typedef struct vbtallocman {

    int have_mspace;
    //struct mspace_interface mspace;
    
    int have_cspace;
    //struct cspace_interface cspace;

    int have_utspace;
    //struct utspace_interface utspace;

} vbtallocman_t;

