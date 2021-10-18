#include <stdio.h>
#include "hanoj.h"

int cnt_tahu = 0; 

int move_tower(int cnt, int src, int dst, int tmp)
{
    if (cnt > 0)
    {
        if (cnt > 1)
        {
            //printf("move disc [%d]: %d - %d\n", DISC_CNT - cnt, src, dst);
            move_tower(cnt - 1, src, tmp, dst); 
            move_tower(1, src, dst, 0);
            move_tower(cnt - 1, tmp, dst, src);
            ++cnt_tahu;
        }
        else
        {
            printf("move disc [%d]: %d - %d\n", DISC_CNT - cnt, src, dst);
        }
    }
    
    return cnt_tahu;
}
