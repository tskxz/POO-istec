#ifndef INVOICE_H
#define INVOICE_H

#include <iostream>
#include <string>

using namespace std;

class Invoice{
	protected:
		int num_item;
		string descricao;
		int quantidade;
		double preco_unitario;
		
	public:
		Invoice(int num_item, string descricao, int quantidade, double preco_unitario);
		void setNumItem(int num_item);
		int getNumItem();
		void setDescricao(string descricao);
		string getDescricao();
		void setQuantidade(int quantidade);
		int getQuantidade();
		void setPrecoUnitario(double preco_unitario);
		double getPrecoUnitario();
		double getInvoiceAmount();
};

#endif
