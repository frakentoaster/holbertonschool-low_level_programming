/* fn searches for substrings within a string */
char *string_string(const char *haystack, const char *needle) {
  if (!*needle) {
		return haystack;
	}
  char *p1 = (char*)haystack;
  while (*p1) {
    char *p1Begin = p1;
		*p2 = (char*)needle;
    while (*p1 && *p2 && *p1 == *p2) {
      p1++;
      p2++;
    }
    if (!*p2) {
			return p1Begin;
		}
    p1 = p1Begin + 1;
  }
  return NULL;
}
