#include <iostream>

#include "streamline.h"

#include <glbinding/gl/gl.h>

#include <nodes/ConnectionStyle>
#include <nodes/FlowScene>
#include <nodes/FlowView>
#include <nodes/NodeData>

#include <QtWidgets/QApplication>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QVBoxLayout>

#include <nodes/DataModelRegistry>

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    QWidget mainWidget;

    std::cout << "hello, with dependencies!" << std::endl;
    streamline::function(1);

    mainWidget.setWindowTitle("We are puting out there a window!!!");
    mainWidget.resize(800, 600);
    mainWidget.showNormal();

    return app.exec();
}
