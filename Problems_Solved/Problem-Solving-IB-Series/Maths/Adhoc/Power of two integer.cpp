//Use logrithm to calculate it
int Solution::isPower(int A)
{
    if (A == 1)
    {
        return true;
    }
    for (int i = 2; i * i <= A; i++)
    {
        float logcheck = log(A) / log(i);
        //From basic log formula derivation...
        if (ceil(logcheck) == floor(logcheck))
        {
            return true;
        }
    }
    return false;
}
