int string_alpha(char *s) {
	int i,r, count, length;
	i = 0;
	r = 0;
	length = 0;

	while (s[r] != '\0') {
		length++;
		r++;
	}

	count = 0;
	/* loop til end of string */
	while (s[i] != '\0') {
	  /* If char is within range of lowercase on ascii table */
		if ((s[i] <= 'z' && s[i] >= 'a') || (s[i] <= 'Z' && s[i] >= 'A')) {
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
