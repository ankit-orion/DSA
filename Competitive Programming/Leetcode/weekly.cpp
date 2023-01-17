int temp = n, count = 0;
while (temp != 0)
{
    // Fetching each digit of the number
    int d = temp % 10;
    temp /= 10;

    // Checking if digit is greater than 0
    // and can divides n.
    if (d > 0 && n % d == 0)
        count++;
}

return count;