#include <algorithm>
#include "App.h"

using namespace std;
int App::start(){
    auto TriangleCreation = new Services::TriangleCreation;
    auto RectangleCreation = new Services::RectangleCreation;
    vector<Services::GeoFig *> allFigures;
    vector<pair<int, int>> sortedObjects;
    int n = 0;
    cout << "Choose the figure r/t/f (Rectangle/Triangle/Finish)" << endl;
    char chosenFigure;
    while (cin >> chosenFigure) {
        if (chosenFigure == triangle) {
            cout << " Write the data of equilateral triangle " << endl;
            Services::GeoFig *tr = TriangleCreation->createGeoFig();
            tr->DialogService();
            allFigures.push_back(tr);
            n++;
            sortedObjects.push_back(make_pair(tr->mass(), n));
        } else if (chosenFigure == Rectangle) {
            cout << " Write the data of parallelogram " << endl;
            Services::GeoFig *par = RectangleCreation->createGeoFig();
            par->DialogService();
            allFigures.push_back(par);
            n++;
            sortedObjects.push_back(make_pair(par->mass(), n));
        } else if (chosenFigure == finish) {
            int massT = 0, perimeterT = 0, squareT = 0, sizeT = 0;
            for (int i = 0; i < allFigures.size(); i++) {
                perimeterT += allFigures[i]->perimeter();
                squareT += allFigures[i]->square();
                sizeT += allFigures[i]->size();
                massT += allFigures[i]->mass();
            }
            sort(sortedObjects.begin(), sortedObjects.end());
            cout << " Perimeter of all objects :  " << perimeterT << endl;
            cout << " Square of all objects : " << squareT << endl;
            cout << " Mass of all objects : " << massT << endl;
            cout << " Objects take : " << sizeT << endl;
            cout << "Objects in sorted order : ";
            for (int i = 0; i < sortedObjects.size(); i++) {
                cout << sortedObjects[i].second << ' ';
            }
            break;
        }
        if (chosenFigure == 't' || chosenFigure == 'p') {
            cout << " what figure do we add? p/t/f (Parallelogram/Equilateral Triangle/Finish)" << endl;
        }
    }
    return 0;
}