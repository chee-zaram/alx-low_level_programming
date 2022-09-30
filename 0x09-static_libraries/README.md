# C - Static libraries
Creating and using static libraries in C.
## libmy.a
This is a static library. Prototypes for the object files are in **main.h**. They are mostly a replica of functions in the standard library, and do exactly the same things in most instances.
## create_static_lib.sh
This is a script that creates a static library, **liball.a**, from all **.c** files in the current working directory.
