#ifdef INC
#define PRIVATE(x) struct { x } _private;
#else
#define PRIVATE(x) x
#endif 

struct foo {
    char x;
    int y;
PRIVATE(
    long z;
)};
