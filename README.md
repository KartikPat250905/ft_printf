# ft_printf

Write a library that contains ft_printf(), a
function that will mimic the original printf()

The task was quite straightforward, so the implementation was simple. Despite the simplicity, memory management was challenging, especially ensuring there are no leaks if the file descriptor returns an error midway through the program.

The bonus part required managing multiple file descriptors with a single static variable. The implementation was straightforward as I assumed there could be a maximum number of open file descriptors at once, so I used a static array of integers.

## Installation

Clone this repository and use the Makefile to compile the project:
```
git clone https://github.com/KartikPat250905/ft_printf
```
Compile the project using the included Makefile:
```
cd ft_printf
make
```

## Usage

The ft_printf function can be used similarly to the standard printf. Here is an example of how to use it:

```c
#include "ft_printf.h"

int main()
{
    int number = -42;
    ft_printf("String: Hello, %s!\n", "world");
    ft_printf("Number: %d\n", number);
    ft_printf("Integer: %i\n", number);
    ft_printf("Float: %f\n", number);
    ft_printf("Hex: %x\n", number);
    return 0;
}

```
## License

This project is licensed under the MIT License
