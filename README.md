# GoatCppVuln

This is a purposefully vulnerable project written in C++ for educational purposes.

## Included Vulnerabilities

1. **Buffer Overflow**: Accessing memory out of bounds.
2. **Null Pointer Dereference**: Attempting to access a null pointer.
3. **Memory Leak**: Failure to release allocated memory.
4. **Race Condition**: Race condition in shared variables.

## How to Compile

```bash
mkdir build && cd build
cmake ..
make
```

## Disclaimer

This project is solely for demonstrating vulnerabilities and security tool analysis. Do not use in production.
