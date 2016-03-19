char *rot13(char *c) {
	int i;
	/* loop to end of string rotating chars by 13 */
	for (i = 0; c[i] != '\0'; i++) {
		if (c[i] <= 'm' && c[i] >= 'a') {
			c[i]+=13;
		}
		else if (c[i] <= 'z' && c[i] >= 'n') {
			c[i]-=13;
		}
		else if (c[i] <= 'M' && c[i] >= 'A') {
			c[i]+=13;
		}
		else if (c[i] <= 'Z' && c[i] >= 'N') {
			c[i]-=13;
		}
	}
	return c;
}
