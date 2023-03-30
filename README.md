# Console.h

### Intro

Static Console class to manage some useful behaviors that a terminal has.

### Usage

Functions:
- getty
- print_history
- color

#### Getty

Accepts a string reference and a prompt.
It inserts inside the given string the user input.
If `Console::echo` is set to `true` (default) the user will see what he's typing.
If `Console::has_history` is set to `true` (default) the user will be able to press the
keyboard arrows to insert older inputs.

```
1 | #include <string>
2 | #include "Console.h"
3 | ...
4 | ...
5 | void foo() {
6 |     std::string str;
7 |     Console::getty(str);
8 | }
``` 

#### Print_history (*debug purposes*)

It will print the content of `Console::history`.

```
1 | #include <string>
2 | #include "Console.h"
3 | ...
4 | ...
5 | void foo() {
6 |     Console::print_history();
7 | }
``` 

#### Color

Accepts a `Console::Colors` (integer) value, default one is `Console::Colors::base`.
It will change the output color.

```
1 | #include <string>
2 | #include "Console.h"
3 | ...
4 | ...
5 | void foo() {
6 |     Console::color(Console::Colors::green);
7 | }
```