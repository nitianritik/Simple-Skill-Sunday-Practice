int *matchingStrings(int strings_count, char **strings, int queries_count, char **queries, int *result_count)
{

    static int a[queries_count];
    int count = 0 for (int j = 0; j < queries_count; j++)
    {

        count = 0;

        for (int i = 0; i < strings_count; i++)
        {

            if (strcmp(queries[j], strings[i]) == 0)
            {
                count++;
            }
        }

        a[j] = count;
    }

    *result_count = sizeof(a) / sizeof(a[0]);

    return a;
}
