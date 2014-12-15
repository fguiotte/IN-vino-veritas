/***************************************************************************
 *
 * TODO: Project Title
 *
 * Author: Florent Guiotte <guiotte.florent@gmail.com>
 *
 **************************************************************************/

#include "ResizePresenter.h"

ResizePresenter::ResizePresenter(MainWindow *parent, ResizeModel *model, ResizeImageParametersWidget *parametersWidget) : AbstractPresenter(parent, model, parametersWidget) {

}

ResizePresenter::~ResizePresenter() {
}

void ResizePresenter::runModel() {
    model->run();
}

void ResizePresenter::presentModelResults() {

}
