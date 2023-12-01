#include <unistd.h>

void ft_putnbr(int n) {
    char digit;
    if (n >= 10) {
        ft_putnbr(n / 10);
    }
    digit = n % 10 + '0';
    write(1, &digit, 1);
}

void fizzbuzz(int n) {
    if (n % 3 == 0 && n % 5 == 0) {
        write(1, "FizzBuzz", 8);
    } else if (n % 3 == 0) {
        write(1, "Fizz", 4);
    } else if (n % 5 == 0) {
        write(1, "Buzz", 4);
    } else {
        ft_putnbr(n);
    }
}

int main() {
    int i = 1;
    while (i <= 100) {
        fizzbuzz(i);
        write(1, "\n", 1);
        i++;
    }

    return 0;
}

