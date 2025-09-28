#include<iostream>
using namespace std;
class Printer {
	public:
		void print_document()
		{
			cout << "Document Printed " << endl;
		}
};
class Scanner {
	public:
		void scan_document()
		{
			cout << "Document Scanned " << endl;
		}
};
class Photocopier : public Printer, public Scanner {
	public:
		void photocopy()
		{
			cout << "Document Photocopied " << endl;
		}
};
