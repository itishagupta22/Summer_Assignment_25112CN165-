#include <iostream>
#include <limits>
using namespace std;

// Reads a validated int from cin. Reprompts on invalid input.
int readInt(const string &prompt)
{
    int value;
    while(true)
    {
        cout << prompt;
        cin >> value;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, please enter a whole number.\n";
        }
        else
        {
            break;
        }
    }
    return value;
}

// Reads a validated float from cin. Reprompts on invalid input.
float readFloat(const string &prompt)
{
    float value;
    while(true)
    {
        cout << prompt;
        cin >> value;
        if(cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input, please enter a number (e.g. 8.5).\n";
        }
        else
        {
            break;
        }
    }
    return value;
}

void addAnime(string name[], string genre[], int episodes[], float rating[], string status[], int &n)
{
    if(n>=100){
        cout<<"Collection is full!\n";
        return;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\nEnter Anime Details\n";

    cout << "Name: ";
    getline(cin, name[n]);

    cout << "Genre: ";
    getline(cin, genre[n]);

    episodes[n] = readInt("Episodes: ");
    rating[n] = readFloat("Rating: ");

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Status (Watching/Completed): ";
    getline(cin, status[n]);

    n++;

    cout << "\nAnime Added Successfully!\n";
}

void displayAnime(string name[], string genre[], int episodes[], float rating[], string status[], int n)
{
    if(n==0){
        cout<<"No anime in the collection.\n";
        return;
    }

    cout << "\n------ Anime Collection ------\n";

    for(int i=0;i<n;i++)
    {
        cout << "\nAnime " << i+1 << endl;
        cout << "Name      : " << name[i] << endl;
        cout << "Genre     : " << genre[i] << endl;
        cout << "Episodes  : " << episodes[i] << endl;
        cout << "Rating    : " << rating[i] << endl;
        cout << "Status    : " << status[i] << endl;
    }
}

void searchAnime(string name[], string genre[], int episodes[], float rating[], string status[], int n)
{
    if(n==0){
        cout<<"No anime in the collection.\n";
        return;
    }

    string search;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout<<"Enter Anime Name: ";
    getline(cin, search);

    bool found=false;

    for(int i=0;i<n;i++)
    {
        if(name[i]==search)
        {
            cout<<"\nAnime Found\n";
            cout<<"Name      : "<<name[i]<<endl;
            cout<<"Genre     : "<<genre[i]<<endl;
            cout<<"Episodes  : "<<episodes[i]<<endl;
            cout<<"Rating    : "<<rating[i]<<endl;
            cout<<"Status    : "<<status[i]<<endl;
            found=true;
            break;
        }
    }

    if(!found)
        cout<<"Anime Not Found\n";
}

void updateStatus(string name[], string status[], int n)
{
    if(n==0){
        cout<<"No anime in the collection.\n";
        return;
    }

    string search;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout<<"Enter Anime Name: ";
    getline(cin, search);

    bool found=false;

    for(int i=0;i<n;i++)
    {
        if(name[i]==search)
        {
            cout<<"Enter New Status: ";
            getline(cin,status[i]);

            cout<<"Status Updated Successfully!\n";
            found=true;
            break;
        }
    }

    if(!found)
        cout<<"Anime Not Found\n";
}

void highestRated(string name[], float rating[], int n)
{
    if(n==0){
        cout<<"No anime in the collection.\n";
        return;
    }

    int index=0;

    for(int i=1;i<n;i++)
    {
        if(rating[i]>rating[index])
            index=i;
    }

    cout<<"\nHighest Rated Anime\n";
    cout<<"Name   : "<<name[index]<<endl;
    cout<<"Rating : "<<rating[index]<<endl;
}

void completedAnime(string name[], string status[], int n)
{
    if(n==0){
        cout<<"No anime in the collection.\n";
        return;
    }

    bool found=false;

    cout<<"\nCompleted Anime\n";

    for(int i=0;i<n;i++)
    {
        if(status[i]=="Completed")
        {
            cout<<name[i]<<endl;
            found=true;
        }
    }

    if(!found)
        cout<<"No completed anime found.\n";
}

void totalEpisodes(int episodes[], int n)
{
    if(n==0){
        cout<<"No anime in the collection.\n";
        return;
    }

    int total=0;

    for(int i=0;i<n;i++)
        total+=episodes[i];

    cout<<"\nTotal Episodes = "<<total<<endl;
}

void deleteAnime(string name[], string genre[], int episodes[], float rating[], string status[], int &n)
{
    if(n==0){
        cout<<"No anime in the collection.\n";
        return;
    }

    string search;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout<<"Enter Anime Name to Delete: ";
    getline(cin,search);

    bool found=false;

    for(int i=0;i<n;i++)
    {
        if(name[i]==search)
        {
            for(int j=i;j<n-1;j++)
            {
                name[j]=name[j+1];
                genre[j]=genre[j+1];
                episodes[j]=episodes[j+1];
                rating[j]=rating[j+1];
                status[j]=status[j+1];
            }

            n--;
            cout<<"Anime Deleted Successfully!\n";
            found=true;
            break;
        }
    }

    if(!found)
        cout<<"Anime Not Found\n";
}

int main()
{
    const int MAX=100;

    string name[MAX],genre[MAX],status[MAX];
    int episodes[MAX];
    float rating[MAX];

    int n=0,choice;

    do
    {
        cout<<"\n========== ANIME COLLECTION MANAGER ==========\n";
        cout<<"1. Add Anime\n";
        cout<<"2. Display Collection\n";
        cout<<"3. Search Anime\n";
        cout<<"4. Update Status\n";
        cout<<"5. Highest Rated Anime\n";
        cout<<"6. Show Completed Anime\n";
        cout<<"7. Total Episodes\n";
        cout<<"8. Delete Anime\n";
        cout<<"9. Exit\n";

        choice = readInt("\nEnter your choice: ");

        switch(choice)
        {
            case 1: addAnime(name,genre,episodes,rating,status,n); break;
            case 2: displayAnime(name,genre,episodes,rating,status,n); break;
            case 3: searchAnime(name,genre,episodes,rating,status,n); break;
            case 4: updateStatus(name,status,n); break;
            case 5: highestRated(name,rating,n); break;
            case 6: completedAnime(name,status,n); break;
            case 7: totalEpisodes(episodes,n); break;
            case 8: deleteAnime(name,genre,episodes,rating,status,n); break;
            case 9: cout<<"Thank You!\n"; break;
            default: cout<<"Invalid Choice!\n";
        }

    }while(choice!=9);

    return 0;
}