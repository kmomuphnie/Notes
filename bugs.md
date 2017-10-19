Bugs to avoid in the future
---

1. `NULL` in ASCII is `\x00`, so even `HJ\x00\n` appears the same as `HJ\n`, but they are not the same.
when go through a array use while loop `'\0'condition`is better than use for loop(find length first), since if we use for loop. it may reach out of the array
and cause some error.

2. MIND the Consecutive memory location, because when we declare a array, make sure we reserve space for the NULL to end the chunk the current
use of memory.

3.Do not overstep the bounds of the array or suffer the segmentation fault 

4.do mind the setting of the condition of the loop, those are just silly mistakes but quite annoying.

5.When perform a huge loop, do mind checking whether we stop at the first beginning

6.When pass a array between function, if you want to dynamiclly change the size of the array, you need to set the `int* & array` instead of just `int array[]` because the latter simply means ` int* array`. So if you use the latter way, you just pass a copy of the original array, there is no way to make any change to the original one, and all change wont be saved.



