std::string tweakLetters(std::string s, std::vector<int> arr) {
	for(int i=0;i<s.size();++i)
		s[i]='a'+(s[i]+arr[i]-'a'+26)%26;
	return s;
}
