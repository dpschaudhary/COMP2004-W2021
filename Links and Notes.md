# C Tutorials and Documentation

## References

>  C and C++ are different: don’t mix them, and don’t mix them up.

- [C library - C++ Reference](https://www.cplusplus.com/reference/clibrary/) Make sure to only use the C library part of this reference

- [C language - cppreference.com](https://en.cppreference.com/w/c/language) Again, ensure that C++ doesn't creep into your program.

- [POSIX Threads Programming](https://computing.llnl.gov/tutorials/pthreads/) We will use POSIX threads for this course, and the pthread library is where we will also find the Mutex lock functions.

- [Multithreaded Programming Guide](https://docs.oracle.com/cd/E53394_01/pdf/E54803.pdf) A good resource originating with Solaris, now Oracle. Much more detail than will be covered in the course, but a good reference.

## Articles

- [c++ - Why should I always enable compiler warnings? - Stack Overflow](https://stackoverflow.com/questions/57842756/why-should-i-always-enable-compiler-warnings)
  A short, concise answer to a question that explains why warnings should be enabled for compiling and taken as errors.  I suggest using even more flags that the S.O. answer uses.
  For clang: `-Weverything`
  For gcc: `-Wall -Wextra -Wpedantic -Wconversion -Wstrict-prototypes -Wmissing-declarations`
  
  > "C makes it easy to shoot yourself in the foot"

- [C Operator Precedence - cppreference.com](https://en.cppreference.com/w/c/language/operator_precedence)
  A good reference when expressions don't give the expected result.  Note that there's no operator in C for exponents (to the power of)

- [C for Python Programmers](http://www.cs.toronto.edu/~patitsas/cs190/c_for_python.html) A short and concise article that will be helpful if you come from a python only background.

- [What's the difference between declaring and defining in C and C++ - Cprogramming.com](https://www.cprogramming.com/declare_vs_define.html)
  Feel free to read the whole article, but if you are struggling with the fact that C requires declaring, read the first 2 sections; "What it Means to Declare Something in C and C++" and "What it Means to Define Something in C and C++"

- [Concurrent programming, with examples](https://begriffs.com/posts/2020-03-23-concurrent-programming.html)
  This article will be valuable for discussing process synchronisation.

## Tutorials

- [Mutex lock for Linux Thread Synchronization - GeeksforGeeks](https://www.geeksforgeeks.org/mutex-lock-for-linux-thread-synchronization/)
  Remember that GeeksforGeeks can be written by anyone, even students in an operating systems class, but there can be good information.  This tutorial is an example of something that is decently written.  Remember though, don't take the information as absolutely, always true.

- [How to use POSIX semaphores in C language - GeeksforGeeks](https://www.geeksforgeeks.org/use-posix-semaphores-c/)
  Another GeeksforGeeks

- [Cprogramming.com](https://www.cprogramming.com)
  Same advice, as any other C/C++ information;  make sure to only use the C tutorials

# Interesting Information about OS/Architecture

- [ISSCC2018 - 50 Years of Computer Architecture:From Mainframe CPUs to Neural-Network TPUs - YouTube](https://www.youtube.com/watch?v=NZS2TtWcutc&feature=youtu.be)
  A presentation from a scholar of computer architecture and operating systems.

- [Computer Architecture and Amdahl's Law](https://online.mun.ca/d2l/le/content/391118/viewContent/3636602/View)
  Links back to D2L PDF.  Search online to find more information

- [Things I Wish They Told Me About Multiprocessing in Python](https://www.cloudcity.io/blog/2019/02/27/things-i-wish-they-told-me-about-multiprocessing-in-python/)
  We will be using multiprocessing, both with processes and threads.  This is an article about writing multiprocessing in python.  The tips provided are relevant to C as well (but won't necessarily be needed for the programs written in this course).
