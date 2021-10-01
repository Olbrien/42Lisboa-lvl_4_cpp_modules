###### <i>Recent Update on 27/09/2021.</i>
• Started the project.

## Subject:

You can find the subject of these projects

[cpp_module_00](https://github.com/Olbrien/42Lisboa-lvl_4_cpp_modules/blob/main/cpp_module_00/extras/lvl_4_cpp_module_00.pdf)\
[cpp_module_01](https://github.com/Olbrien/42Lisboa-lvl_4_cpp_modules/blob/main/cpp_module_01/extras/lvl_4_cpp_module_01.pdf)

In general these projects contain:
- Namespace, class, member functions, stdio stream, initialization lists, static, const
- Memory allocation, references, pointers to members, switch


## Research:

<pre>
---------------------------------------------------------------------------------------------

What is C++?

    C++ is a cross-platform language that can be used to create high-performance applications.
    C++ is an object-oriented programming language which gives a clear structure to programs
    and allows code to be reused, lowering development costs.


What is Object-Oriented Programming (OPP)?

    Procedural programming is about writing procedures or functions that perform operations on
    the data, while object-oriented programming is about creating objects that contain both data
    and functions.


---------------------------------------------------------------------------------------------

Hello World:

    #include <iostream>
    using namespace std;

    int main() {
    cout << "Hello World!";
    return 0;
    }

1)  #include <iostream>

    Is a header file library that lets us work with input and output objects,
    such as cout (used in line 5). Header files add functionality to C++ programs.

2)  using namespace std

    Means that we can use names for objects and variables from the standard library.

3) cout (pronounced "see-out")

    Is an object used together with the insertion operator (<<) to output/print text.
    It will output "Hello World".


Hello World without Namespace:

    #include <iostream>

    int main() {
    std::cout << "Hello World!";
    return 0;
    }


---------------------------------------------------------------------------------------------

Line Break:

        #include <iostream>

        int main() {
        std::cout << "Hello World!" << endl;
        return 0;
        }

    or:

        #include <iostream>

        int main() {
        std::cout << "Hello World!\n";
        return 0;
        }


---------------------------------------------------------------------------------------------

Variables:

    int myNum = 5;               // Integer (whole number without decimals)
    double myFloatNum = 5.99;    // Floating point number (with decimals)
    char myLetter = 'D';         // Character
    string myText = "Hello";     // String (text)
    bool myBoolean = true;       // Boolean

Constants:

    const float num = 3.14;

    This are read only and can't be changed.
    You should always declare the variable as constant when you have values that are
    unlikely to change.


---------------------------------------------------------------------------------------------

What are Classes and Objects?

    Classes and objects are the two main aspects of object-oriented programming.

    Example:

        Class:      Fruit
        Objects:    Apple, Banana, Mango


    So, a class is a template for objects, and an object is an instance of a class.
    When the individual objects are created, they inherit all the variables and functions from the class.


Create a Class:

    class MyClass {       // The class
        public:           // Access specifier
            int myNum;        // Attribute (int variable)
            string myString;  // Attribute (string variable)
    };

    int main() {
        MyClass myObj;  // Create an object of MyClass

        // Access attributes and set values
        myObj.myNum = 15;
        myObj.myString = "Some text";

        // Print attribute values
        cout << myObj.myNum << "\n";
        cout << myObj.myString;
        return 0;
    }


Class Methods:

    Methods are functions that belongs to the class.

    There are two ways to define functions that belongs to a class:

        Inside class definition
        Outside class definitition


    Inside Class definition:

        class MyClass {                 // The class
            public:                     // Access specifier
                void myMethod() {       // Method/function defined inside the class
                cout << "Hello World!";
                }
        };

        int main() {
            MyClass myObj;     // Create an object of MyClass
            myObj.myMethod();  // Call the method
            return 0;
        }


    Outside Class definition:

        class MyClass {             // The class
            public:                 // Access specifier
                void myMethod();    // Method/function declaration
        };

        // Method/function definition outside the class
        void MyClass::myMethod() {
            cout << "Hello World!";
        }

        int main() {
            MyClass myObj;     // Create an object of MyClass
            myObj.myMethod();  // Call the method
            return 0;
        }


---------------------------------------------------------------------------------------------

Constructors:

    A constructor in C++ is a special method that is automatically called when an object
    of a class is created.

    The constructor has the same name as the class, it is always public, and it does not
    have any return value.

        #include <iostream>

        using namespace std;

        class constructor {
            public:
                int green;
                constructor() {
                    cout << "HELLOOOOO\n";
                }
        };

        int main() {
            constructor obj;
        }


Constructor Parameters:

    Constructors can also take parameters (just like regular functions), which can be
    useful for setting initial values for attributes.

        #include <iostream>

        using namespace std;

        class constructorparams {
            public:
                int numberOne;
                int numberTwo;
                int numberThree;

                constructorparams(int x, int y, int z) {
                    numberOne = x;
                    numberTwo = y;
                    numberThree = z;
                }
        };

        int main() {
            constructorparams obj = {1, 2, 3};

            cout << obj.numberOne << endl;
            cout << obj.numberTwo << endl;
            cout << obj.numberThree << endl;

        }


Constructor Outside Class:

    #include <iostream>

    using namespace std;

    class constructorparamsoutside {
        public:
            int numberOne;
            int numberTwo;
            int numberThree;

            constructorparamsoutside(int x, int y, int z);
    };

    constructorparamsoutside::constructorparamsoutside(int x, int y, int z) {
        numberOne = x;
        numberTwo = y;
        numberThree = z;
    }

    int main() {
        constructorparamsoutside obj1 = {1, 2, 3};
        constructorparamsoutside obj2 = {4, 5, 6};

        cout << obj1.numberOne << endl;
        cout << obj1.numberTwo << endl;
        cout << obj1.numberThree << endl;

        cout << obj2.numberOne << endl;
        cout << obj2.numberTwo << endl;
        cout << obj2.numberThree << endl;
    }

Destructor:

    A constructor in C++ is a special method that is automatically called when an object
    of a class is deleted;

        #include <iostream>

        class constructordestructor {
            public:
                constructordestructor();
                ~constructordestructor();
        };

        constructordestructor::constructordestructor() {
            std::cout << "I CONSTRUCTED";
        }

        constructordestructor::~constructordestructor() {
            std::cout << "I DESTROYED IT";
        }

        int main() {
            constructordestructor obj;
        }


---------------------------------------------------------------------------------------------

Access Specifiers:

In C++, there are three access specifiers:

    Public - Members are accessible from outside the class
    Private - Members cannot be accessed (or viewed) from outside the class
    Protected - Members cannot be accessed from outside the class, however, they can be
                accessed in inherited classes.


Encapsulation

    The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
    To achieve this, you must declare class variables/attributes as private
    (cannot be accessed from outside the class). If you want others to read or modify
    the value of a private member, you can provide public get and set methods.


Access Private Members

    To access a private attribute, use public "get" and "set" methods

        #include <iostream>

        using namespace std;

        class classesencapsulating {
            private:
                string band;

            public:
                void setBand(string x) {
                    band = x;
                }
                string getBand() {
                    return band;
                }
        };

        int main() {
            classesencapsulating obj;
            obj.setBand("Eskimo Callboy");
            cout << obj.getBand() << endl;
        }


---------------------------------------------------------------------------------------------

Inheritance:

    It is possible to inherit attributes and methods from one class to another.
    We group the "inheritance concept" into two categories:

        derived class (child) - the class that inherits from another class
        base class (parent) - the class being inherited from

    To inherit from a class, use the : symbol

        #include <iostream>

        using namespace std;

        class inheritance {
            public:
                string computers = "Mac";
                void test() {
                    cout << "This computer is sheit\n";
                }
        };

        class car: public inheritance {
            public:
                string computers2;
        };

        int main() {
            car obj;

            obj.computers2 = "Window";
            obj.test();

            cout << obj.computers << endl;
            cout << obj.computers2 << endl;

        }


Why And When To Use "Inheritance"?

    It is useful for code reusability: reuse attributes and methods of an existing class
    when you create a new class.


Multilevel Inheritance:

    #include <iostream>

    class inheritanceMultilevel {
        public:
            inheritanceMultilevel() {
                std::cout << "HERO";
            }
    };

    class dog: public inheritanceMultilevel {
    };

    class cat: public dog {
    };

    int main() {
        cat obj;
    }


Multiple Inheritance:

    #include <iostream>

    using namespace std;

    class myClass {
        public:
            void hello() {
                cout << "Hello!\n";
            }
    };

    class secondClass {
        public:
            void goodbye() {
                cout << "Goodbye!\n";
            }
    };

    class multi: public myClass, public secondClass {
    };

    int main() {
        multi obj;

        obj.hello();
        obj.goodbye();
    }


Access Specifiers Protected:

    #include <iostream>

    using namespace std;

    class myClass {
        protected:
            int red;
    };

    class inher: public myClass {
        public:
            void setRed(int number) {
                red = number;
            }

            int getRed() {
                return red;
            }

    };

    int main() {
        inher obj;

        obj.setRed(10);
        cout << obj.getRed() << endl;
    }


---------------------------------------------------------------------------------------------

Polymorphism:

    Polymorphism means "many forms", and it occurs when we have many classes that are
    related to each other by inheritance.

        #include <iostream>

        using namespace std;

        class Animal {
            public:
                void animalSound() {
                cout << "The animal makes a sound \n" ;
            }
        };

        class Pig : public Animal {
            public:
                void animalSound() {
                cout << "The pig says: wee wee \n" ;
            }
        };

        class Dog : public Animal {
            public:
                void animalSound() {
                cout << "The dog says: bow wow \n" ;
            }
        };

        int main() {
            Animal myAnimal;
            Pig myPig;
            Dog myDog;

            myAnimal.animalSound();
            myPig.animalSound();
            myDog.animalSound();
            return 0;
        }


---------------------------------------------------------------------------------------------

Exceptions:

    Exception handling in C++ consist of three keywords: try, throw and catch:

        - The try statement allows you to define a block of code to be tested for errors while
            it is being executed.
        - The throw keyword throws an exception when a problem is detected, which lets us
            create a custom error.
        - The catch statement allows you to define a block of code to be executed, if an error
            occurs in the try block.

            #include <iostream>

            using namespace std;

            int main() {
                try {
                    int age = 15;
                    if (age >= 18) {
                        cout << "Access Granted!" << endl;
                    } else {
                        throw(age);
                    }
                }
                catch (int myNum) {
                    cout << "Access Denied!" << endl;
                    cout << "Age is " << myNum << endl;
                }
            }

---------------------------------------------------------------------------------------------

Namespaces:

    #include <stdio.h>

    namespace foo {
    int gl_var = 3;
    int f(void) {return 4; }
    }

    namespace bar {
    int gl_var = 4;
    int f(void) {return 5; }
    }

    namespace moo {
    int gl_var = 5;
    int f(void) {return 6; }
    }

    namespace bah = moo;

    int main() {
        printf("%d\n", foo::gl_var);
        printf("%d\n", foo::f());

        printf("%d\n", bah::gl_var);
        printf("%d\n", bah::f());
    }


---------------------------------------------------------------------------------------------

Static:

    Statics in classes persist.

    To make a static variable you have to declare it outside the class, otherwise you will get
    "Undefined symbols for architecture x86_64:".

    Also you need to declare the static as "staticClass::_count".


        #include <iostream>

        class staticClass {
            public:
                staticClass();
                ~staticClass();

                int getCount();

            private:
                static int _count;
        };

        int staticClass::_count = 0;

        staticClass::staticClass() {
            staticClass::_count++;
        }

        staticClass::~staticClass() {
            staticClass::_count--;
        }

        int staticClass::getCount() {
            return this->_count;
        }


        int main() {
            staticClass obj;
            staticClass obj2;
            staticClass obj3;

            std::cout << obj.getCount() << std::endl;
            std::cout << obj2.getCount() << std::endl;
            std::cout << obj3.getCount() << std::endl;
        }


---------------------------------------------------------------------------------------------

Memory Allocation:

    New and Delete:

        Dynamic memory allocation in C/C++ refers to performing memory allocation manually
        by programmer.
        Dynamically allocated memory is allocated on Heap and non-static and local
        variables get memory allocated on Stack.

        This is the same as doing "malloc(sizeof(type))" in C.


        Example 1 (New):

            int main() {
                int p = new int(12);
                if (p == NULL)
                    std::cout << "Error Allocation\n";

                std::cout << *p << "\n";
            }

        Example 2 (New):

            int main() {
                int *p = NULL;
                p = new int;
                if (p == NULL)
                    std::cout << "Error Allocation\n";

                *p = 10;

                std::cout << *p << "\n";
            }

        Example 3 (New without Delete):

            class Student {
                public:
                    Student() { std::cout << "Created!\n";}
                    ~Student() { std::cout << "Destroyed!\n";}

            };

            int main() {
                Student student1;
                Student *student2 = new Student;
            }

                Output: Created!
                        Created!
                        Destroyed!

            (In this case, you didn't Delete the Memory you allocated, therefor it was never destroyed)


        Example 4 (New with Delete):

            class Student {
                public:
                    Student() { std::cout << "Created!\n";}
                    ~Student() { std::cout << "Destroyed!\n";}

            };

            int main() {
                Student student1;
                Student *student2 = new Student;

                delete student2;
            }

                Output: Created!
                        Created!
                        Destroyed!
                        Destroyed!


---------------------------------------------------------------------------------------------

References:

    With references, you don't need to dereference the address to access the data value.


    Example 1 (Variables):

        #include <iostream>

        int main() {

            int     numberOfBalls = 42;

            int     *ballsPtr = &numberOfBalls;
            int     &ballsRef = numberOfBalls;

            std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

            *ballsPtr = 10;

            std::cout << numberOfBalls << std::endl;

            ballsRef = 20;

            std::cout << numberOfBalls << std::endl;
        }


    Example 2 (Functions):

        void byPtr(int *numberOfBalls) {
            *numberOfBalls = 100;
        }

        void byPtrConst(int const *numberOfBalls) {
            std::cout << *numberOfBalls << std::endl;
        }

        void byRef(int &numberOfBalls) {
            numberOfBalls = 123;
        }

        void byRefConst(int const &numberOfBalls) {
            std::cout << numberOfBalls << std::endl;
        }

        int main() {

            int     numberOfBalls = 42;

            byPtr(&numberOfBalls);
            byPtrConst(&numberOfBalls);
            byRef(numberOfBalls);
            byRefConst(numberOfBalls);
        }


---------------------------------------------------------------------------------------------

How to read and write from a file:

    C++ library called fstream, which defines three new data types:

        ofstream:
            This data type represents the output file stream and is used to create files and
            to write information to files.

            Has "ios::out" as default.

        ifstream:
            This data type represents the input file stream and is used to read information
            from files.

            Has "ios::in" as default.

        fstream:
            This data type represents the file stream generally, and has the capabilities of both
            ofstream and ifstream which means it can create files, write information to files,
            and read information from files.

            Has "ios::out and ios::in" as default.


    To perform file processing in C++, header files <iostream> and <fstream> must be
    included in your C++ source file.

        ios::in	        Open for input operations.
        ios::out	    Open for output operations.
        ios::binary	    Open in binary mode.
        ios::ate	    Set the initial position at the end of the file.
                        If this flag is not set, the initial position is the beginning of the file.
        ios::app	    All output operations are performed at the end of the file, appending the content to
                        the current content of the file.
        ios::trunc	    If the file is opened for output operations and it already existed, its previous content
                        is deleted and replaced by the new one.


    Example (Have one file called fstream.txt with text there):

        #include <iostream>
        #include <fstream>

        int main() {

            std::string line;
            std::fstream filename;

            /* Reading from filename */

            filename.open("fstream.txt"); // ios::out and ios::in as default. 
            if (filename.is_open()) {
                while (std::getline(filename, line)) {
                    std::cout << line << std::endl;
                }
            }
            filename.close();


            /* Writing to the filename */
            
            line = "\nHELLO \nIS IT ME YOU'RE LOOKInG FOR?\n";

            filename.open("fstream.txt", std::ios::in | std::ios::app); // ios::out and ios::in as default and added append. 
            if (filename.is_open()) {
                filename << line;
            }
            filename.close();


            /* Reading from filename */

            filename.open("fstream.txt"); // ios::out and ios::in as default. 
            if (filename.is_open()) {
                while (std::getline(filename, line)) {
                    std::cout << line << std::endl;
                }
            }
            filename.close();

        } 



https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
https://www.cplusplus.com/doc/tutorial/files/


---------------------------------------------------------------------------------------------

Function Pointers:

    A function pointer, also called a subroutine pointer or procedure pointer, is a pointer
    that points to a function. Function pointers can be used to simplify code by providing
    a simple way to select a function to execute based on run-time values.


    Example (Normal Data Pointers):

            void    helloNumber(int a) {
                printf("%d\n", a);
            }

            void    helloWorld() {
                printf("Hello World\n");
            }
            
            int main() {
                void (*helloWorld_ptr)() = &helloWorld;    
                (*helloWorld_ptr)();

                void (*helloNumber_ptr)(int) = &helloNumber;
                (*helloNumber_ptr)(123555);
            }


    Example (Without Address):

            void    helloNumber(int a) {
                printf("%d\n", a);
            }

            void    helloWorld() {
                printf("Hello World\n");
            }

            int main() {
                void (*helloWorld_ptr2)() = helloWorld;
                helloWorld_ptr2();

                void (*helloNumber_ptr2)(int) = helloNumber;
                helloNumber_ptr2(99);
            }

        
    Example (Switch Case):

            void    caseOne(int a) {
                printf("Case One = %d\n", a);
            }

            void    caseTwo(int a) {
                printf("Case Two = %d\n", a);
            }

            void    caseThree(int a) {
                printf("Case Three = %d\n", a);
            }

            int main() {

                void (*cases[])(int) = {caseOne, caseTwo, caseThree};

                (*cases[0])(1);
                (*cases[1])(2);
                (*cases[2])(3);
            }

    
    Example (As an Argument):

            void    asAnArgumentOne(void (*func)()) {
                func();    
            }

            void    asAnArgumentTwo(void (*func)(int), int value) {
                func(value);    
            }

            void    helloNumber(int a) {
                printf("%d\n", a);
            }

            void    helloWorld() {
                printf("Hello World\n");
            }

            int main() {

                void (*helloWorld_ptr3)() = &helloWorld;
                asAnArgumentOne(helloWorld_ptr3);

                void (*helloNumber_ptr3)(int) = &helloNumber;
                asAnArgumentTwo(helloNumber_ptr3, 123);
            }

    
    Example (As a Class):

            class Karen {
            public:
                void complain ();

            private:
                void debug ( void );
                void info ( void );
                void warning ( void );
                void error ( void );

            };

            void Karen::complain() {
                
                void (Karen::*casePtr[])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

                (this->*casePtr[0])();
                (this->*casePtr[1])();
                (this->*casePtr[2])();
                (this->*casePtr[3])();
            }

            void Karen::debug(void) {
                std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
            }

            void Karen::info(void) {
                std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
            }

            void Karen::warning(void) {
                std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month!" << std::endl;
            }

            void Karen::error(void) {
                std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
            }

            int main() {
                
                Karen julia;

                julia.complain();
            }



---------------------------------------------------------------------------------------------
</pre>
