Tricks
---

1.Use the modulus to accomplish a end-start loop: end to head with specific position


2.`char array[3];`  means ask for a block of memory space that can hold three characters, but to have A END , it must be given a `'\0'` even added manually.

3.enough buffer space and when do the strcpy make sure that the source strig must have `'\0'`.

---


...
4.AND the `char abc = "abc"; ` already give the `'\0'`  `'a','b','c','\0';` Because the  `""`means giving a '\0' to the memory space u asked.
...

5.We can perform the TRIE data structure to full-fill the need of higher dimentional trees

6.I need a yellow ruber duck

7.different way to initial string in c++ 
http://www.cplusplus.com/reference/string/string/string/

8.range based for loop
  
9. <map> the find iterator will equal to the end iterator if it cannot find what it wants

10. initialize 2d vector
https://stackoverflow.com/questions/17663186/initializing-a-two-dimensional-stdvector
11. memory / port / IOhttps://superuser.com/questions/703695/difference-between-port-mapped-and-memory-mapped-access

12.https://stackoverflow.com/questions/5914422/proper-way-to-initialize-c-structs
---
struct MyStruct {
  private:
    int someInt_;
    float someFloat_;

  public:
    MyStruct(): someInt_(0), someFloat_(1.0) {} // Initializer list will set appropriate values

};
---
