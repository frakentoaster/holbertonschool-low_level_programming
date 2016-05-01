/* script changes lowercase to uppercase */
char *uppercase_string(char *c) {
	int i;
	i = 0;
	/* loop til end of string */
	while (c[i] != '\0') {
  /* If char is within range of lowercase on ascii table */
	  if (c[i] <= 'z' && c[i] >= 'a') {
	    c[i]-=32; /* convert to cap in ascii table */
	  }
		i++;
	}
  return c;
}
