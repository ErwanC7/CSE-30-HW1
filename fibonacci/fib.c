/**
 * Returns the nth term in the fibonacci sequence.
 * The sequence should be 0-indexed, i.e. F(0) = 0, F(1) = 1, F(2) = 1, ...
 *
 * @param n : index of term to return
 * @return the nth term in the fibonacci sequence
 */
int get_nth_fib(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 2, c = 0; i <= n; ++i) {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
