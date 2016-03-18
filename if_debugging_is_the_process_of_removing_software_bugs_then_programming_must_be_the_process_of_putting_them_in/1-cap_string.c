char *cap_string(char *c) {
	int i;
	/* loop til end of string */
	for (i = 0; c[i] != '\0'; i++) {
	  /* If char is within range of lowercase on ascii table */
		if (c[i] < 123 && c[i] > 96) {
			/* checks previous char for space, newline and tabulation */
		  if (c[i-1] == ' ' || c[i-1] == '\n' || c[i-1] == '\t') {
		    c[i]-=32; /* convert to cap in ascii table */
		  }
		}
	}
  return c;
}
