#include <iostream>

#include "nodes/image_show_model.hpp"
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

using QtNodes::DataModelRegistry;
using QtNodes::FlowScene;
using QtNodes::FlowView;

static std::shared_ptr<DataModelRegistry> registerDataModels() {
    auto ret = std::make_shared<DataModelRegistry>();
    ret->registerModel<ImageShowModel>();
    return ret;
}

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);

    FlowScene scene(registerDataModels());
    FlowView view(&scene);

    view.setWindowTitle("We are puting out there a window!!!");
    view.resize(800, 600);
    view.showNormal();

    return app.exec();
}
