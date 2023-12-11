#include "Article.h"
#include "CLDataBase.h"

void Article::afficher(System::Windows::Forms::DataGridView^ data)
{
    CLDataBase^ database = gcnew CLDataBase();
    System::String^ query = "SELECT * FROM Article WHERE";
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


void Article::ajouter()
{
    CLDataBase^ database = gcnew CLDataBase();
    System::String^ query = "INSERT INTO Article (nom, quantite_article, nature) VALUES ('" + nom + "', '" + quantite_article + "', '" + nature + "')";
    database->ExecuteQuery(query);
}


void Article::modifier()
{
    CLDataBase^ database = gcnew CLDataBase();
    System::String^ query = "UPDATE Article SET ";

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


void Article::supprimer()
{
    CLDataBase^ database = gcnew CLDataBase();
    System::String^ query = "DELETE FROM Article WHERE ref_article = '" + ref_article + "';";
    database->ExecuteQuery(query);
}

void Article::rafraichir(System::Windows::Forms::DataGridView^ data)
{
    CLDataBase^ database = gcnew CLDataBase();
    System::Data::DataSet^ dataSet = database->getDataSet("SELECT * FROM Article;");

    data->DataSource = (dataSet->Tables->Count > 0) ? dataSet->Tables[0] : nullptr;
}

void Article::setNom(System::String^ nom)
{
    this->nom = nom;
}

void Article::setQuantite_article(System::String^ quantite_article)
{
    this->quantite_article = quantite_article;
}

void Article::setNature(System::String^ nature)
{
    this->nature = nature;
}

void Article::setRef_article(System::String^ ref_article)
{
	this->ref_article = ref_article;
}
