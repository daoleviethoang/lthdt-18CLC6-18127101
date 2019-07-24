#include "04.h"
void main()
{
	vector<vector<int>> vt_2D;
	for (int i = 0; i < 5; i++)
	{
		vt_2D.push_back(vector<int>{i});
		for (int j = 0; j < 5; j++)
		{
			vt_2D[i].push_back(j);
		}
	}
	int iRow = 5;
	int iCol = 10;
	try
	{
		if (iRow < 0 || iRow > vt_2D.size() || iCol < 0 || iCol > vt_2D[0].size())
		{
			throw IndexOutOf2DRangeException(iRow, iCol);
		}
		for (int i = 0; i < vt_2D.size(); i++)
		{
			for (int j = 0; j < vt_2D[0].size(); j++)
			{
				cout << "Array["<< i <<"]["<< j <<"] = " << vt_2D[i][j] << endl;
			}
		}
	}
	catch (IndexOutOf2DRangeException &Index)
	{
		cout << Index.what() << endl;
	}
	cout << "End Game" << endl;
	_getch();
}