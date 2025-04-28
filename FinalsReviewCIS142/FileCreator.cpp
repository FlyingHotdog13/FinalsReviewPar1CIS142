
#include "FileCreator.h"
FileCreator::FileCreator(string f)
{
	this->MyFile.open(f);

}
void FileCreator::FileWrite(string p, int q, float price, float total)
{
	this->MyFile << p << "," << q << "," << price << "," << total << endl;
}
void FileCreator::HeaderWrite()
{
	this->MyFile << "Product, quantity, price, total" << endl;

}
void FileCreator::CloseFile()
{
	this->MyFile.close();
}