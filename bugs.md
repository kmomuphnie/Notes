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


7.We need to initialize the thing we declared, sometimes it can be tricky with the constructor stuff

8.https://stackoverflow.com/questions/3280410/why-doesnt-delete-destroy-anything
Thing about  `delete` in C++ and the free, the memory use mechanism.
It wont reset when u free that, just like tell the computer: you can change this block of memory in the future
`Calling delete will mark the memory area as free. It won't necessary reset its old value.`

9.When dealing with the class which contains a head of a linked list, make sure WHEN you manipulate the linked list, you do
Editting the linked list, For example, if `head == NULL`, you copy the head and think youself is building the linked list, but 
actually nothing happened in head, because you copy a NULL. Another example, when you trying to delete a node in the linked 
list, if the one you want to delete is the first one in the linked list, when you free it, make sure you use the original 
`head ` to free, otherwise, the head will points to a area which is already freeed and BAD_ACE may happen

10. When you build the linked list in a order, make sure you check the first node of the linked list.

11.consider the double linked list more often

12.When cant find where is wrong from the logic level, go check the naming convetion and make sure you are use whatever your want to use.

13 Fk the netbeans, the auto forming sucks

14 treated char in the numerical string as int. Dont do it again. the boolen doesnt accept it but wont tell u, just automatic false when u do the comparison
