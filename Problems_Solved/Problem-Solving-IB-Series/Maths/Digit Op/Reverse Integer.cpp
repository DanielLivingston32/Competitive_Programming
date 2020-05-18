// For explanation one integer overflow detection check abishek sir video https://www.youtube.com/watch?v=8UR9Fwk0xLc ...

int Solution::reverse(int A)
{
    int reverse = 0;
    while (A != 0)
    {
        int temp = A % 10 + reverse * 10;
        if (temp / 10 != reverse)
        {
            return 0;
        }
        reverse = temp;
        A /= 10;
    }
    return reverse;
}
