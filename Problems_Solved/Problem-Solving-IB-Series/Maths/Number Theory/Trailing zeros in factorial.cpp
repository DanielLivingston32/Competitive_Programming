// Concept: Trailing zeroes are made only when 2 is multiplied by 5... In any factorial if you split it up into its base components
// (i.e) as powers of 2,3,4,5 etc you need to find total no of 2 and 5 pairs in them for finding the total amount of trailing zeroes...
// Point to note... There are always more 2's than 5's.... So we could exploit this by calculating only 5's in a factorial....

int Solution::trailingZeroes(int A)
{
    int sum = 0;
    while (A)
    {
        sum += (A / 5);
        A /= 5;
    }
    return sum;
}
