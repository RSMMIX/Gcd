int main ()
{
    int n1 , n2 , gcd , lcm;
    printf("");
    scanf("%d %d" ,&n1 , &n2);
    for (int i = 1; i <= n1; i++)
    {
        if (n1 % i == 0 && n2 % 1 ==0)
        {
            gcd = i;
    lcm = (n1 * n2) / gcd;    
    }
    
    return 0;