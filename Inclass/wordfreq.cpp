 #include"bits/stdc++.h"

using namespace std;

void convertString(string& inp)
{
    for(int i=0;i<inp.length();i++)inp[i]=tolower(inp[i]);
}

//-----------------------------------------------------------
// Parameter: text - input text to be splitted
// Return value:
//   A vector of strings containing tokens obtained from
//   splitting the input text.
//-----------------------------------------------------------
const char* delims = " \t\n\r\\\"\'!#$%&()*+,-./:;<=>?@[]^_`{|}~";
vector<string> split(string& text) {
    char* t;
    t = strtok((char*)text.c_str(), delims);
    vector<string> tokens;
    while (t != NULL) {
        tokens.push_back(t);
        t = strtok(NULL, delims);
    }
    return tokens;
}
//-----------------------------------------------------------
// Parameter: filename - input file name
// Return value:
//    A map of word-to-frequency obtained from counting each
//    unique word in the input file.
//-----------------------------------------------------------
map<string,int> wordFreq(string filename) {
    ifstream infile;
    infile.open(filename);
    string line;
    map<string,int> freq;
    while (getline(infile, line)) {
		// lgetline reads each line of infile to the line variable
		convertString(line);
		vector<string> V=split(line);
        for(string st : V)
            freq[st]++;
    }
    infile.close();
    return freq;
}
//-----------------------------------------------------------
// Parameter: freq, n
//    freq - a map of word-to-frequency
//    n    - a positive integer to specify the top n most
//           frequency words
// Return value:
//    A vector of strings containing the top n most frequency
//    words in freq, descendingly sorted by frequency.
//-----------------------------------------------------------
vector<string> top(const map<string,int> & freq, int n) {
    vector<pair<int,string> > pairVec;
    for(pair<string,int> p : freq)pairVec.push_back(make_pair(-p.second,p.first));
    sort(pairVec.begin(),pairVec.end());
    vector<string> Vreturn;
    for(int i=0;i<n;i++)
    {
        Vreturn.push_back(pairVec[i].second);
    }
    return Vreturn;
}
//-----------------------------------------------------------
int main() {
    map<string, int> freq = wordFreq("big.txt");
    cout << "#unique words = " << freq.size() << endl;
    cout << "love --> " << freq["love"] << endl;
    cout << "hate --> " << freq["hate"] << endl;

    vector<string> top10 = top(freq, 10);
    for (const string & w : top10)
        cout << freq[w] << " --> " << w <<  endl;
}
