
- Compiler: [[Mingw-w64]]

#### Simple Compile and .exe run

1. Firstly, you must navigate to the directory where the C++ application resides. Replace `<folder-directory>` with the actual location.

```
$ cd <folder-directory> 
```

2. Once the terminal is directed to the correct location of the C++ application, g++ is used to compile the `.cpp` file. Run this to compile into a `.exe`:
	- `g++` is the compiler.
	- `main.cpp` is the C++ application being compiled.
	- `-o main` sets the `.exe` file name.
```
$ g++ main.cpp -o main
```

3. The C++ application is now compiled and ready to run. Run the application in the terminal by typing the application `.exe` name that was defined in the compilation process.

```
$ ./main.exe
```

#### Combined Compile and Run Command

This terminal command will compile and run a C++ application with one fowl swoop of a keyboard. It is everything defined above combined into one.  

```
$ g++ main.cpp -o main ; ./main.exe
```