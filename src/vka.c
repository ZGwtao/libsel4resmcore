
#include <vka/vka.h>
#include <resmcore/resmcore.h>
#include <assert.h>

static int _resmcore_cspace_alloc(void *alloc, seL4_CPtr *res)
{
    int error;

    return error;
}

static void _resmcore_cspace_make_path(void *alloc, seL4_CPtr slot, cspacepath_t *res)
{

}

static int _resmcore_utspace_alloc(void *alloc, const cspacepath_t *dest, seL4_Word type,
                                                     seL4_Word size_bits, seL4_Word *res)
{
    int error;

    return error;
}

static int _resmcore_utspace_alloc_maybe_device(void *alloc, const cspacepath_t *dest,
               seL4_Word type, seL4_Word size_bits, bool can_use_dev, seL4_Word *res)
{
    int error;

    return error;
}

static int _resmcore_utspace_alloc_at(void *alloc, const cspacepath_t *dest, seL4_Word type,
                                      seL4_Word size_bits, uintptr_t paddr, seL4_Word *res)
{
    int error;

    return error;
}

static void _resmcore_cspace_free(void *alloc, seL4_CPtr slot)
{

}

static void _resmcore_utspace_free(void *alloc, seL4_Word type, seL4_Word size_bits, seL4_Word target)
{

}

static int _resmcore_utspace_try_alloc_from_pool(void *alloc, seL4_Word type, seL4_Word size_bits,
                                                    uintptr_t paddr, bool can_use_dev, cspacepath_t *res)
{
    /**
     * 1. use @arg *res to determine if it is from pool: res = -1 means from pool (no base untyped)
     * 2. use @arg *dest to represent the capability slot its cap resides in.
     */
    int error;

    return error;
}

static void _resmcore_utspace_try_free_from_pool(void *alloc, seL4_CPtr cptr)
{
    return;
}

static int _resmcore_cspace_is_from_pool(void *alloc, seL4_CPtr cptr)
{
    int error;

    return error;
}

void resmcore_make_vka(vka_t *vka, resmcore_t *alloc)
{
    assert(vka);
    assert(alloc);

    vka->data = alloc;
    
    vka->cspace_alloc = &_resmcore_cspace_alloc;
    vka->cspace_make_path = &_resmcore_cspace_make_path;

    vka->utspace_alloc = &_resmcore_utspace_alloc;
    vka->utspace_alloc_maybe_device = &_resmcore_utspace_alloc_maybe_device;
    vka->utspace_alloc_at = &_resmcore_utspace_alloc_at;
    
    vka->cspace_free = &_resmcore_cspace_free;
    
    vka->utspace_free = &_resmcore_utspace_free;

/* Not implemented yet. */
    vka->utspace_paddr  = NULL;
    
    vka->cspace_is_from_pool = &_resmcore_cspace_is_from_pool;
    vka->utspace_try_alloc_from_pool = &_resmcore_utspace_try_alloc_from_pool;
    vka->utspace_try_free_from_pool = &_resmcore_utspace_try_free_from_pool;
}

