#ifndef ALIGNMENTVIZWIDGET_H
#define ALIGNMENTVIZWIDGET_H

#include "stable.h"
#include "qcustomplot.h"
#include "mainwindow.h"
#include "PeakGroup.h"
#include "mzSample.h"
#include "Peak.h"
#include <math.h>

class MainWindow;
class PeakGroup;
class mzSample;
class Peak;

class AlignmentVizWidget : public QObject
{
    Q_OBJECT
public:
    AlignmentVizWidget(MainWindow* mw);

public Q_SLOTS:
    void plotGraph(PeakGroup*);

    void intialSetup();
    void setXAxis();
    void setYAxis();

    void refRtLine(PeakGroup*);
    double getRefRt(PeakGroup*);

    void drawMessageBox(PeakGroup*, PeakGroup*);
    float calculateRsquare(PeakGroup*);

    PeakGroup* getNewGroup(PeakGroup*);
    bool checkGroupEquality(PeakGroup*, PeakGroup*);

    void plotIndividualGraph(PeakGroup*, QColor);

    vector<mzSample*> getSamplesFromGroup(PeakGroup*);
    float getWidthOfBar(PeakGroup*);
    double getRetentionTime(mzSample*, PeakGroup*);

private:
    MainWindow* _mw;

};

#endif