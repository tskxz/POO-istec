#include "Invoice.h"

#include <string>
#include <iostream>

Invoice::Invoice(int num_item, string descricao, int quantidade, double preco_unitario){
	this->num_item = num_item;
	this->descricao = descricao;
	if(quantidade > 0){
		this->quantidade = quantidade;
	} else {
		this->quantidade = 0;
	}

	if(preco_unitario > 0.0){
		this->preco_unitario = preco_unitario;
	} else {
		this->preco_unitario = 0.0;
	}

}

void Invoice::setNumItem(int num_item){
	this->num_item = num_item;
}

int Invoice::getNumItem(){
	return this->num_item;
}

void Invoice::setDescricao(string descricao){
	this->descricao = descricao;
}

void Invoice::setQuantidade(int quantidade){
	if(quantidade > 0){
		this->quantidade = quantidade;
	} else {
		this->quantidade = 0;
	}
}

int Invoice::getQuantidade(){
	return this->quantidade;
}

void Invoice::setPrecoUnitario(double preco_unitario){
	if(preco_unitario > 0.0){
		this->preco_unitario = preco_unitario;
	} else {
		this->preco_unitario = 0.0;
	}
}

double Invoice::getPrecoUnitario(){
	return this->preco_unitario;
}

double Invoice::getInvoiceAmount(){
	return this->quantidade * this->preco_unitario;
}
