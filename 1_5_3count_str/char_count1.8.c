#include <stdio.h>

    main(){
        int spc, tab, n_str;
        spc = 0;
        tab = 0;
        n_str = 0;
        while (getchar() != EOF)
         if (getchar() == " "){
            ++spc;
            }
         if (getchar() == "\t"){
            ++tab;
            }
         if (getchar() == "\n"){
            ++n_str;
            }
        printf("%ld\n", sps, tab, n_str);
}
