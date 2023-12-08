#include "Stock.h"
#include "CLDataBase.h"

void Stock::afficher(System::Windows::Forms::DataGridView^ data)
{
    CLDataBase^ database = gcnew CLDataBase();
    System::String^ query = "SELECT * FROM Stock WHERE";
    bool where = false;

    if (nom != "")
    {
        query += " nom = '" + nom + "'";
        where = true;
    }

    if (quantite_article != "")
    {
        query += (where ? " AND" : "") + " quantite_article = '" + quantite_article + "'";
        where = true;
    }

    if (nature != "")
    {
        query += (where ? " AND" : "") + " nature = '" + nature + "'";
        where = true;
    }

    if (ref_article != "")
    {
        query += (where ? " AND" : "") + " ref_article = " + ref_article;
        where = true;
    }

    query += ";";

    System::Data::DataSet^ dataSet = database->getDataSet(query);

    data->DataSource = (dataSet->Tables->Count > 0) ? dataSet->Tables[0] : nullptr;
}


void Stock::ajouter()
{
    CLDataBase^ database = gcnew CLDataBase();
    System::String^ query = "INSERT INTO Stock (nom, quantite_article, nature) VALUES ('" + nom + "', '" + quantite_article + "', '" + nature + "')";
    database->ExecuteQuery(query);
}


void Stock::modifier()
{
    CLDataBase^ database = gcnew CLDataBase();
    System::String^ query = "UPDATE Stock SET ";

    if (nom != "")
    {
        query += "nom = '" + nom + "' ";
    }

    if (quantite_article != "")
    {
        query += "quantite_article = '" + quantite_article + "' ";
    }

    if (nature != "")
    {
        query += "nature = '" + nature + "' ";
    }

    // Assurez-vous que vous avez des conditions à mettre à jour
    query += " WHERE ref_article = '" + ref_article + "';";
    database->ExecuteQuery(query);

}


void Stock::supprimer()
{
    CLDataBase^ database = gcnew CLDataBase();
    System::String^ query = "DELETE FROM Stock WHERE ref_article = '" + ref_article + "';";
    database->ExecuteQuery(query);
}

void Stock::rafraichir(System::Windows::Forms::DataGridView^ data)
{
    CLDataBase^ database = gcnew CLDataBase();
    System::Data::DataSet^ dataSet = database->getDataSet("SELECT * FROM Stock;");

    data->DataSource = (dataSet->Tables->Count > 0) ? dataSet->Tables[0] : nullptr;
}

void Stock::setNom(System::String^ nom)
{
    this->nom = nom;
}

void Stock::setQuantite_article(System::String^ quantite_article)
{
    this->quantite_article = quantite_article;
}

void Stock::setNature(System::String^ nature)
{
    this->nature = nature;
}

void Stock::setRef_article(System::String^ ref_article)
{
	this->ref_article = ref_article;
}
