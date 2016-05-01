/* script changes uppercase to lowercase */
char *lowercase_string(char *c) {
	int i;
	/* loop til end of string */
	for (i = 0; c[i] != '\0'; i++) {
  /* If char is within range of uppercase on ascii table */
	  if (c[i] <= 'Z' && c[i] >= 'A') {
	    c[i]+=32; /* convert to lower in ascii table */
	  }
	}
  return c;
}
