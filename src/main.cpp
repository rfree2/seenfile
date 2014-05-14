
#include "lib_common1.hpp"

INJECT_OT_COMMON_USING_NAMESPACE_COMMON_1

/*
59ca0efa9f5633cb0371bbc0355478d8  book-hobbit.txt
59ca0efa9f5633cb0371bbc0355478d8  greeting-my.txt
59ca0efa9f5633cb0371bbc0355478d8  greeting.txt
fef2a0d1e543b6a3b15ae6f961b62165  poetry.txt
*/

typedef string cHash; // "59ca0efa9f5633cb0371bbc0355478d8"
typedef string cTestimony; // "greeting-my.txt"
typedef vector<cTestimony> cTestimonyList; // { "greeting-my.txt", "greeting.txt", "book-hobbit.txt"  }


class cKnowledge {
	private:
		map< cHash , cTestimonyList > testimony; // example element: "59ca0efa9f5633cb0371bbc0355478d8" -> { "greeting-my.txt", "greeting.txt", "book-hobbit.txt"  }

	public:		
		cKnowledge();

		void LoadExample();
		void Show() const;
};

cKnowledge::cKnowledge() {
	LoadExample();
	Show();
}

void cKnowledge::LoadExample() {
	cHash hash = "59ca0efa9f5633cb0371bbc0355478d8";

	cTestimony t1 = "greeting-my.txt";
	cTestimony t2 = "greeting.txt";

	cTestimonyList tlist; // lista oswiadczen
	tlist.push_back( t1 );
	tlist.push_back( t2 );
	// wypisz wszystkie el. listy osw:
	for (int i = 0; i < tlist.size(); ++i) cout << tlist[i] << endl;

  // testimony[ 0 ] = tlist; // C++ na tablicy
	testimony[ hash ] = tlist;

	for (auto tes : tlist) cout << tes << endl;
}

void cKnowledge::Show() const {
}

int main(int argc, const char **argv) {

	cKnowledge knowledge;

}


