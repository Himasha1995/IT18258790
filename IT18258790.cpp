class Photographer{
private:
    string photographerId;
    string photographerName;
    string photographerEmail;
    int photographerTele;

public:
    void UpdateProfile();
    void acceptOdecline();

    //setters

    void setphotographerId(int id)
    {
        photographerId = id;
    }

    void setphotographerName(string name)
    {
        photographerName = name;
    }

    void setphotographerEmail(string email)
    {
        photographerEmail = email;
    }

    void setphotographerTele(int tele)
    {
        photographerTele = tele;
    }

    //getters
    string getphotographerName()
    {
        return photographerName;
    }
    string getphotographerEmail()
    {
        return photographerEmail;
    };
    string getphotographerIC()
    {
        return photographerId;
    }
    int getphotographerTele()
    {
        return photographerTele;
    }

    //constructor
    Photographer(){

    }
    Photographer(string name, string nic, string email, int tele)
    {

        photographerName = name;
        photographerId = nic;
        photographerTele = tele;
        photographerEmail = email;
    }
};