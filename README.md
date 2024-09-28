# C Progamming Language KickOff

This is the repo where I start learning `C Programming Language`.

## Check GCC Compiler

```bash
g++ --version
```

```bash
clang --version
```

```bash
gcc --v
```

## Compile Command

```bash
gcc index.c src/*.c -o index
```

```bash
./index
```

```bash
clear && gcc index.c src/*.c -o index && ./index
```

## vsCode Snippets

```json
"Print to console": {
    "prefix": "clog",
    "body": [
        "printf(\"$1\");",
        "$2"
    ],
    "description": "Log output to console"
},

"STD Include": {
    "prefix": "cin",
    "body": [
        "#include <std$1>"
    ],
    "description": "Include standard input-output library"
},
```