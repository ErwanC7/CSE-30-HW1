int mystery_func(int n) {
	return (n + (n + 1) ^ 0xabcd) << 2 + n << 3 - !!n;
}
