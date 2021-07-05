const char *Message(int numTries)
{
	const int n = 4;
	static const char *user_message[n] = {
		"Oops! Nice guess but not quite it.",
		"Oh. Sorry. Wrong again.",
		"Ah, this is harder than it looks, no?",
		"It must be getting pretty frustrating by now!"
	};
	if (numTries < 0)
		numTries = 0;
	else if (numTries >= n)
		numTries = n - 1;
	return user_message[numTries];
}
