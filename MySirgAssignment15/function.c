#include<string.h>

void find_given_pattern(char str[], char pattern[])
{
    int i, j;

    for(i = 0; i < strlen(pattern); i++)
    {
        for(j = 0; j < strlen(str); j++)
        {
            if(pattern[i] == str[j])

        }
    }
}

void find_index_first_occurance(char str[], char ch)
{
    int i;

    for(i = 0; i < strlen(str); i++)
        if(ch == str[i])
            break;

    printf("%c has %d index in %s",ch,i,str);
}

void count_occurance_character(char str[], char ch)
{
    int i, count = 0;

    for(i = 0; i < strlen(str); i++)
        if(ch == str[i])
            count++;

    printf("%c has %d times in %s",ch,count,str);
}


void is_alphanumeric(char str[])
{
    int i, flag = 0;
    char ch;

    for(i = 0; i < strlen(str); i++)
    {
        ch = str[i];

        if(ch >= '0' && ch <= '9')
        {
            flag = 1;
            break;
        }
    }

    if(flag)
        printf("%s is a alphanumeric ", str);
    else
        printf("%s is not a alphanumeric", str);
}

void palindrom_string(char str[])
{
    int i, n, check = 0;
    char str2[50], ch;

    strcpy(str2, str);

    n = strlen(str);

//    for (int i = 0; i < n / 2; i++)
//    {
//        ch = str[i];
//        str[i] = str[n - i - 1];
//        str[n - i - 1] = ch;
//    }

    strrev(str);

    check = strcmp(str2, str);

    if(check)
        printf("Not a palindrome string");
    else
        printf("Palindrome string");
}

void count_words(char str[])
{
    int i, count = 1;

    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ')
            count++;
    }

    printf("%d", count);
}

void reverse_string_word_wise(char str[]) //meet kumar vishwakarma
{
    int i;
    char s[100];

    for(i = strlen(str) - 1; i >= 0; i--)
    {
        if(str[i] == ' ')
        {
            strcpy(s, str);
        }
    }
    printf("%s\n", s);
}

//not completed
void capitalize_string(char str[])
{
    int i;

    for(i = 0; i < strlen(str); i++)
    {
        if(i == 0)
        {
            str[i] = str[i] - 32;
            continue;
        }
        if(str[i] == ' ')
        {
            i++;
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
                continue;
            }
        }
        else
        {
            if(str[i] >= 'A' && str[i] <= 'A')
            {
                str[i] = str[i] - 32;
            }
        }
    }

    printf("%s", str);
}

void count_vowels_string(char str[])
{
    char vowels[] = "aeiou";
    int i, j, count = 0;

    for(i = 0; str[i]; i++)
    {
        for(j = 0; j < strlen(str); j++)
        {
            if(vowels[i] == str[j])
            {
                count++;
            }
        }
    }

    printf("%s has %d vowels",str, count);
}


void compare_string(char str1[], char str2[])
{
    int compare = strcmp(str1, str2);

    if(compare == 0)
        printf("Strings are same");
    else
        printf("Strings are not same");
}
