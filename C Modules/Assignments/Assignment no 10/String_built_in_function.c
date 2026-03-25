#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10] = "Hello";
    char str2[10] = "World";
    char str3[10] = "Firstbit";
    char str4[10];
//strcpy
    strcpy(str4, str1);
    printf("1.string copy(strcpy):%s\n", str4);
//strlen
    printf("2.string Length(strlen):%lu\n", strlen(str3));
//strncpy
    strncpy(str4, str2, 3);
    str4[3] = '\0';
    printf("3.strncpy():%s\n", str4);
//strcat
    strcat(str1, str3);
    printf("4.strcat(): %s \n", str1);
    // strncat
    strncat(str1, "!!!", 1);
    printf("5.strncat: %s\n", str1);
    // strcmp
    printf("6.strcmp: %d\n", strcmp("abc", "abc"));
    // strncmp
    printf("7.strncmp: %d\n", strncmp("abc", "abd", 2));

    // strchr
    printf("8.strchr:%s\n", strchr("hello", 'e'));

    // strrchr
    printf("9.strrchar: %s\n", strrchr("firstbit", 'b'));

    // strstr
    printf("10.strstr: %s\n", strstr("hello firstbit", "firstbit"));

    // strpbrk
    printf("11.strpbrk: %s\n", strpbrk("fisrtbit solutions", "aeiou"));

    // strtok
    char str5[20] = "first,second,third";
    char *token = strtok(str5, ",");
    printf("12. strtok:\n");
    while (token != NULL)
    {
        printf(" %s\n", token);
        token = strtok(NULL, ",");
    }

    // strspn
    printf("13.strspn:%lu \n", strspn("abcdef123", "abcd"));

    // strcspn()
    printf("14.strcspn:%lu \n", strcspn("abc123", "12345"));

    // memcpy
    char src[] = "Copy";
    char dest[10];
    memcpy(dest, src, strlen(src) + 1);
    printf("15. memcpy: %s\n", dest);

    // memset
    char str6[10];
    memset(str6, '*', 5);
    str6[5] = '\0';
    printf("16. memset: %s\n", str6);

    // memmove
    char moveStr[] = "12345";
    memmove(moveStr + 2, moveStr, 3);
    printf("17. memmove: %s\n", moveStr);

    // memcmp
    printf("18. memcmp: %d\n", memcmp("abc", "abd", 3));

    // strrev
    char str7[10] = "firstbit";
    strrev(str7);
    printf("19.strrev: %s\n", str7);

    // strlow(lowercase)
    char str8[100] = "HELLO";
    strlwr(str8);
    printf("20.strlow: %s\n", str8);

    // strupr(uppercase)
    char str9[10] = "firstbit";
    strupr(str9);
    printf("21.strupr: %s\n", str9);
    return 0;
}
