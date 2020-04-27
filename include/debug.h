#ifndef _DEBUG_H
#define _DEBUG_H

#ifdef DEBUG
#define P(frm, arg...) {\
    printf ("[%s (%s : %d)] ", __FILE__, __func__, __LINE__);\
    printf (frm, ##arg);\
    printf("\n");\
    fflush(stdout);\
}
#else
#define P(frm, arg...) {}
#endif

#endif
