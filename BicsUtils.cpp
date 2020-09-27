#include "stdafx.h"
#include "BicsUtils.h"

void openPrintFile(const string &filename)
{
	g_filebics.open(filename);
}

void printBic(const pbic_t &bic, const col_t m)
{
	++g_cont;

	if (isNode) {
		clusters_t cluster = new cluster_t;
		cluster->sizeA = bic->sizeA;
		cluster->A = new row_t[bic->sizeA];
		for (row_t i = 0; i < bic->sizeA; ++i)
			cluster->A[i] = bic->A[i] + 1;

		cluster->B = new col_t[m];
		int j = 0;
		for (col_t i = 1; i < m; ++i) {
			if (bic->B[i])
				cluster->B[j++] = i + 1;
		}
		cluster->sizeB = j;
		clusters.push(cluster);
	} else {
		g_filebics << "A{" << g_cont << "} = [";
		for (row_t i = 0; i < bic->sizeA; ++i)
			g_filebics << bic->A[i] + 1 << " ";
		g_filebics << "];\nB{" << g_cont << "} = [";
		for (col_t i = 0; i < m; ++i)
		{
			if (bic->B[i])
				g_filebics << i + 1 << " ";
		}
		g_filebics << "];\n";
	}
}

void closePrintFile()
{
	g_filebics.close();
}
