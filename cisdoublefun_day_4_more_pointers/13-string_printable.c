int string_printable(char *s) {
	int i,r, count, length;
	i = 0;
	r = 0;
	length = 0;

	/* check for empty string */
	if (s[i] == 32) {
		return 1;
	}

	while (s[r] != '\0') {
		length++;
		r++;
	}

	count = 0;
	/* loop til end of string */
	while (s[i] != '\0') {
	  /* If char is within range of printable chars on ascii table */
		if (s[i] <= 126 && s[i] >= 33) {
			count += 1;
		}
		else {
			count = 0;
		}
		i++;
	}
	if (count == length) {
		return 1;
	}
	return 0;
}
