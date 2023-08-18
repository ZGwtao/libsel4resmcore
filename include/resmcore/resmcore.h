
#pragma once

#include <assert.h>
#include <autoconf.h>

typedef struct resmcore {

    int have_mspace;
    //struct mspace_interface mspace;
    
    int have_cspace;
    //struct cspace_interface cspace;

    int have_utspace;
    //struct utspace_interface utspace;

} resmcore_t;

