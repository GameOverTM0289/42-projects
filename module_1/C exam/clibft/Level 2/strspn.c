#include <unistd.h>
#include <stdio.h>
#include <string.h>

size_t strspn(const char *s, const char *accept)
{
    size_t i;
    size_t j;
    int    found;

    i = 0;
    while (s[i])
    {
        j = 0;
        found = 0;
        while (accept [j])
        {
            if (s[i] == accept[j])
            found = 1;
            j++;
        }
        if (found == 0)
        return (i);
        i++;
    }
    return (i);
}

/*int main(void)
{
    const char *s1 = "abcde12345";
    const char *s2 = "abcdxyz";
    const char *s3 = "hello world";
    const char *s4 = "oleh";
    const char *s5 = "";

    printf("Test 1: %zu\n", strspn(s1, s2));  // Expected: 4 ('abcd' are in s2)
    printf("Test 2: %zu\n", strspn(s3, s4));  // Expected: 0 ('h' not in s4)
    printf("Test 3: %zu\n", strspn(s4, s3));  // Expected: 4 (all 'oleh' in s3)
    printf("Test 4: %zu\n", strspn(s3, ""));  // Expected: 0 (empty accept)
    printf("Test 5: %zu\n", strspn(s5, s3));  // Expected: 0 (empty s)

    // Optional comparison with the real strspn
    printf("\n--- Comparing with libc strspn ---\n");
    printf("Libc strspn(\"%s\", \"%s\") = %zu\n", s1, s2, strspn(s1, s2));

    return 0;
}*/
