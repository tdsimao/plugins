// Copyright (c) 2023 Manuel Schneider

#include "albert/logging.h"
#include "plugin.h"
#include "ui_configwidget.h"
ALBERT_LOGGING_CATEGORY("template")
using namespace albert;
using namespace std;


Plugin::Plugin()
{
    // You can 'throw' in the constructor if something fatal happened.
    // E.g. `throw "Description of error.";`
}

void Plugin::handleTriggerQuery(TriggerQuery *) const
{
    // Check the include headers to see how things work.
    // In virtually any case you want to add albert::Item's or one of its subclasses
}

QWidget *Plugin::buildConfigWidget()
{
    auto *widget = new QWidget;
    Ui::ConfigWidget ui;
    ui.setupUi(widget);
    return widget;
}
