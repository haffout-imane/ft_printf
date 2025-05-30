<h1 align="center">
  <img src="https://readme-typing-svg.herokuapp.com/?color=F4BADF&?&font=Righteous&size=35&center=true&vCenter=true&width=500&height=70&duration=4000&lines=welcome+to+ft_printf!;" alt="Typing SVG" />
</h1>
<img align="right" src="https://media.giphy.com/media/v1.Y2lkPTc5MGI3NjExZ2l3dXRpZGhydHcwcmtoNmhsNWU3c3N4YjMxMW8yeWIxdHh1MzR5MCZlcD12MV9zdGlja2Vyc19zZWFyY2gmY3Q9cw/RMvt4YIZRaS5JcihQQ/giphy.gif" width="134" />

### 🧵 Project Overview:

Welcome to `ft_printf`, “The Drama Queen” of your C projects.  
Why? Because this baby demands **perfect** formatting, or it throws a tantrum. 🧐  

Your mission, should you choose to accept it: recreate the legendary `printf` function  
(but *without* using the standard one).  

---

### 📦 What’s inside?

`ft_printf` handles all the usual suspects:

- `%c` — single characters, like your witty one-liners  
- `%s` — strings, because words matter  
- `%p` — pointers, for when you wanna brag about memory addresses  
- `%d` & `%i` — signed integers, the emotional rollercoaster of numbers  
- `%u` — unsigned integers, the cool, no-negative kind  
- `%x` & `%X` — hexadecimals, because sometimes numbers gotta look fancy  
- `%%` — literal `%` signs, because hey, sometimes you just need a percent sign!

All written with pure C sweat, tears, and midnight snacks.

---

### 🔥 Features that’ll make you say “Wow!”

<div align="center">

| 🤹‍♂️ Feature | Why it rocks |
|--------------|--------------|
| 🖨 Custom output | Print anything anywhere (well, stdout at least) like a boss |
| 🧠 Brainy parsing | Decodes format strings better than a spy at a secret meeting |
| ⚔️ Variadic wizardry | Handles unknown numbers of arguments like a circus performer |
| 🐞 Bug squashin’ | Handles weird edge cases so your program won’t crash like a drama queen |

</div>

---

### 🚀 Ready to roll?

Clone it like it’s hot:
```bash
git clone https://github.com/haffout-imane/ft_printf.git
cd ft_printf
make
```

Drop this in your C file:
```c
#include "ft_printf.h"
```

Show off your mad skills:
```c
ft_printf("Hey %s, you scored %d%% on your test!\n", "Emma", 100);
```
Boom! You’re officially a printing wizard. 🧙‍♀️✨

---

### 📚 Learning Resources

A few gems that saved my sanity:

- [GNU C Library: Variadic Functions](https://www.gnu.org/software/libc/manual/html_node/Variadic-Functions.html)  
- [Microsoft Docs — va_start, va_arg, va_end, va_copy](https://learn.microsoft.com/fr-fr/cpp/c-runtime-library/reference/va-arg-va-copy-va-end-va-start?view=msvc-170)

(For understanding variadic functions at a low level)

---

### 💡 Tips & Tricks:
- 🔄 Don’t forget to use va_end()  
Always pair your va_start() with a va_end(). Skipping it? That’s how segfaults happen 👻

- 📦 Modularize your code  
Split your logic into helpers like print_char, print_hex, etc. Your future self will thank you.

- 🧪 Test edge cases  
Print NULL, large numbers, weird formats. Break it before your peers do.

```c
ft_printf("NULL test: %s\n", NULL);
ft_printf("Edge case: %p %x %d\n", NULL, -42, 2147483647);
```
- 📚 Reuse your libft  
Already wrote ft_strlen, ft_itoa, ft_memset? Recycle that gold ♻️

- 🕵️‍♀️ Compare outputs  
Use the real printf() to debug. If it prints something different—you've got work to do.
