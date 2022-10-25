#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;
    ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

ifstream fd ("duota.txt");
    ofstream fr ("rezultatai.txt");
    int n;
    fd >> n;
    int valandu_skaicius, atlygis;

    vector <pair<int, int>> darbas; //*sukuriu poru vektoriu kuris saugos darbo valandas ir atlyginima*// 
    for (int i = 0; i < n; i++) //*ciklas kuris i vektoriu sumeta duomenis*//
    {
        fd >> valandu_skaicius >> atlygis;
        darbas.push_back({valandu_skaicius, atlygis});
    }
    int max_valandu_skaicius, max_atlygis = 0, darbo_atlygis;
    fd >> max_valandu_skaicius;
    int valandos; //*sukuriu laikina kintamaji kuris bus naudojamas sekanciame cikle kiekvienai darbo situacijai*//
    for (int i = 0; i < darbas.size(); i++) //*sukuriu cikla kuris paims viena darba ir tada tikrins visas to darbo kombinacijas su kitais darbais*//
    {

        //*renkamasis darbas, su kuriuo bus praeiti visi scenarijai*//
        darbo_atlygis = 0;
        valandos = max_valandu_skaicius; //*laikinas kintamasis kiekviena ciklo pradzia anuliuojamas*//
        for(int a = 0; a < darbas.size(); a++)
        {
            if (a == 0 && valandos >= darbas[i].first) //*jei darbas, su kuriuo tikrinamos visos poros, tinka, tai numinusuojamos valandos ir pridedamas atlygis kaip potencialus darbo pasirinkimas*//
            {
                darbo_atlygis += darbas[i].second;
                valandos -= darbas[i].first;
            }
            if (valandos >= darbas[a].first && a != i)
            {
                darbo_atlygis += darbas[a].second;
                valandos -= darbas[a].first;

            }
            if (darbo_atlygis > max_atlygis)
            {
                max_atlygis = darbo_atlygis;
            }
            cout << "PIRMAS DARBAS NR " << i+1 << " ANTRAS NR " << a+1 << " LIKES VALANDU KIEKIS: " << valandos << endl;
            cout << "DABARTINIS ATLYGIS: " << darbo_atlygis << endl << "MAX ATLYGIS " << max_atlygis << endl << endl;
            if (valandos == 0)
            {
                break;
            }
        }
    }
    fr << max_atlygis;
    return 0;

}
}