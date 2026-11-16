
void copy(char *psource, char *ptarget, unsigned num_char)
{
    if (psource == NULL || ptarget == NULL)
    {
        return;
    }

    unsigned i = 0;
    while (i < num_char && *psource != '\0')
    {
        *ptarget = *psource;
        ptarget++;
        psource++;
        i++;
    }
    *ptarget = '\0';
}

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    if (ptarget == NULL || buffer_size == 0)
    {
        return;
    }

    unsigned remaining = buffer_size - 1;

    if (psrc1 != NULL)
    {
        copy(psrc1, ptarget, remaining);
        while (*ptarget != '\0')
        {
            ptarget++;
            remaining--;
        }
    }
    else
    {
        *ptarget = '\0';
    }

    if (psrc2 != NULL)
    {
        copy(psrc2, ptarget, remaining);
    }
}
// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s", buffer);
    return 0;
}
#endif
// DO NOT change the code above
