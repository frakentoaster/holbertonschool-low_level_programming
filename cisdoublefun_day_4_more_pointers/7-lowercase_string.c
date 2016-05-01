/* script changes uppercase to lowercase */
char *lowercase_string(char *c) {
	int i;
	i = 0;
	/* loop til end of string */
	while (c[i] != '\0') {
  /* If char is within range of uppercase on ascii table */
	  if (c[i] <= 'Z' && c[i] >= 'A') {
	    c[i]+=32; /* convert to lower in ascii table */
	  }
		i++;
	}
  return c;
}
