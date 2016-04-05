/* script changes lowercase to uppercase */
char *uppercase_string(char *c) {
	int i;
	/* loop til end of string */
	for (i = 0; c[i] != '\0'; i++) {
  /* If char is within range of lowercase on ascii table */
	  if (c[i] <= 'z' && c[i] >= 'a') {
	    c[i]-=32; /* convert to cap in ascii table */
	  }
	}
  return c;
}
