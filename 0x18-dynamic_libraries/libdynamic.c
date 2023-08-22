char *_strcat(char *dest, char *src) {
    char *temp = dest;
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0') {
        *dest++ = *src++;
    }
    *dest = '\0';
    return temp;
}

char *_strncat(char *dest, char *src, int n) {
    char *temp = dest;
    while (*dest != '\0') {
        dest++;
    }
    while (*src != '\0' && n > 0) {
        *dest++ = *src++;
        n--;
    }
    *dest = '\0';
    return temp;
}

char *_strncpy(char *dest, char *src, int n) {
    char *temp = dest;
    while (*src != '\0' && n > 0) {
        *dest++ = *src++;
        n--;
    }
    while (n > 0) {
        *dest++ = '\0';
        n--;
    }
    return temp;
}

int _strcmp(char *s1, char *s2) {
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 < *s2) {
            return -1;
        }
        if (*s1 > *s2) {
            return 1;
        }
        s1++;
        s2++;
    }
    if (*s1 == '\0' && *s2 != '\0') {
        return -1;
    }
    if (*s1 != '\0' && *s2 == '\0') {
        return 1;
    }
    return 0;
}

char *_memset(char *s, char b, unsigned int n) {
    char *temp = s;
    while (n > 0) {
        *s = b;
        s++;
        n--;
    }
    return temp;
}

char *_memcpy(char *dest, char *src, unsigned int n) {
    char *temp = dest;
    while (n > 0) {
        *dest++ = *src++;
        n--;
    }
    return temp;
}

char *_strchr(char *s, char c) {
    while (*s != '\0') {
        if (*s == c) {
            return s;
        }
        s++;
    }
    if (*s == c) {
        return s;
    }
    return NULL;
}

unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    while (*s != '\0' && *accept != '\0') {
        if (*s == *accept) {
            count++;
        } else {
            break;
        }
        s++;
        accept++;
    }
    return count;
}

char *_strpbrk(char *s, char *accept) {
    while (*s != '\0') {
        char *temp = accept;
        while (*temp != '\0') {
            if (*s == *temp) {
                return s;
            }
            temp++;
        }
        s++;
    }
    return NULL;
}

char *_strstr(char *haystack, char *needle) {
    if (*needle == '\0') {
        return haystack;
    }
    while (*haystack != '\0') {
        char *temp1 = haystack;
        char *temp2 = needle;
        while (*temp2 != '\0' && *temp1 == *temp2) {
            temp1++;
            temp2++;
        }
        if (*temp2 == '\0') {
            return haystack;
        }
        haystack++;
    }
    return NULL;
}
