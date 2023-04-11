int factorial(int n) {
  if (n == 1) {
    // This is the base case.
    return 1;
  } else {
    // This is the recursive case.
    return n * factorial(n - 1);
  }
}
